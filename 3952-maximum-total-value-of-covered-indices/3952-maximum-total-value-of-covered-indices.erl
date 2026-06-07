-spec max_total(Nums :: [integer()], S :: unicode:unicode_binary()) -> integer().
max_total(Nums, S) ->
    Arr = array:from_list(Nums),
    N = byte_size(S),
    solve(0, N, Arr, S, 0).

solve(I, N, _Arr, _S, Sum) when I >= N ->
    Sum;
solve(I, N, Arr, S, Sum) ->
    case binary:at(S, I) of
        $0 ->
            solve(I + 1, N, Arr, S, Sum);
        $1 ->
            Begin = I,
            {InitSum, InitMin} =
                if
                    I > 0 ->
                        V = array:get(I - 1, Arr),
                        {V, V};
                    true ->
                        {0, 16#7fffffffffffffff}
                end,
            {NextI, BlockSum, MinNum} =
                consume_ones(I, N, Arr, S, InitSum, InitMin),
            NewSum =
                if
                    Begin > 0 ->
                        Sum + BlockSum - MinNum;
                    true ->
                        Sum + BlockSum
                end,
            solve(NextI, N, Arr, S, NewSum)
    end.

consume_ones(I, N, _Arr, _S, CurSum, CurMin) when I >= N ->
    {I, CurSum, CurMin};
consume_ones(I, N, Arr, S, CurSum, CurMin) ->
    case binary:at(S, I) of
        $1 ->
            Val = array:get(I, Arr),
            consume_ones(
                I + 1,
                N,
                Arr,
                S,
                CurSum + Val,
                erlang:min(CurMin, Val)
            );
        _ ->
            {I, CurSum, CurMin}
    end.