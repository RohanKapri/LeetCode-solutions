-spec check_good_integer(N :: integer()) -> boolean().
check_good_integer(N) ->
    solve(N, 0).

solve(0, Sum) ->
    Sum >= 50;
solve(N, Sum) ->
    Digit = N rem 10,
    solve(N div 10, Sum + Digit * (Digit - 1)).