-spec get_length(Nums :: [integer()]) -> integer().
get_length(Nums) ->
    T = list_to_tuple(Nums),
    N = tuple_size(T),
    solve_i(0, N, T, 1).

solve_i(I, N, _, Ans) when I >= N ->
    Ans;
solve_i(I, N, T, Ans) ->
    Ans1 = solve_j(I, I, N, T, Ans, #{}, #{}),
    solve_i(I + 1, N, T, Ans1).

solve_j(_, J, N, _, Ans, _, _) when J >= N ->
    Ans;
solve_j(I, J, N, T, Ans, Cnt, Freq) ->
    X = element(J + 1, T),

    {Cnt1, Freq1} =
        case maps:find(X, Cnt) of
            {ok, Old} ->
                Freq0 =
                    case maps:get(Old, Freq) of
                        1 -> maps:remove(Old, Freq);
                        V -> maps:put(Old, V - 1, Freq)
                    end,
                Cur = Old + 1,
                {
                    maps:put(X, Cur, Cnt),
                    maps:update_with(Cur, fun(V) -> V + 1 end, 1, Freq0)
                };
            error ->
                {
                    maps:put(X, 1, Cnt),
                    maps:update_with(1, fun(V) -> V + 1 end, 1, Freq)
                }
        end,

    Len = J - I + 1,

    Ans1 =
        case maps:size(Cnt1) of
            1 ->
                max(Ans, Len);
            _ ->
                case maps:size(Freq1) of
                    2 ->
                        It = maps:iterator(Freq1),
                        {A, _, It1} = maps:next(It),
                        {B, _, _} = maps:next(It1),
                        if
                            A > B, A =:= 2 * B ->
                                max(Ans, Len);
                            B > A, B =:= 2 * A ->
                                max(Ans, Len);
                            true ->
                                Ans
                        end;
                    _ ->
                        Ans
                end
        end,

    solve_j(I, J + 1, N, T, Ans1, Cnt1, Freq1).