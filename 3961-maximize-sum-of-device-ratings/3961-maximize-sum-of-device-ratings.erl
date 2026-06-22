-spec max_ratings(Units :: [[integer()]]) -> integer().
max_ratings(Units) ->
    M = length(Units),
    N = length(hd(Units)),
    if
        N =:= 1 ->
            lists:sum([hd(Row) || Row <- Units]);
        true ->
            {Total, MiniF, MiniS} =
                lists:foldl(
                    fun(Row, {AccTotal, AccMiniF, AccMiniS}) ->
                        {FirMin, SecMin} =
                            lists:foldl(
                                fun(Val, {F, S}) ->
                                    if
                                        Val < F ->
                                            {Val, F};
                                        Val < S ->
                                            {F, Val};
                                        true ->
                                            {F, S}
                                    end
                                end,
                                {1000000000, 1000000000},
                                Row
                            ),
                        {AccTotal + SecMin,
                         erlang:min(AccMiniF, FirMin),
                         erlang:min(AccMiniS, SecMin)}
                    end,
                    {0, 1000000000, 1000000000},
                    Units
                ),
            Total - MiniS + MiniF
    end.