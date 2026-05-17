-spec count_kth_roots(L :: integer(), R :: integer(), K :: integer()) -> integer().
count_kth_roots(L, R, K) ->
    case K of
        1 -> R - L + 1;
        _ -> iterate_roots(0, 0, L, R, K)
    end.

iterate_roots(X, Count, L, R, K) ->
    Value = bounded_power(X, K, R),
    case Value > R of
        true -> Count;
        false ->
            case Value >= L of
                true -> iterate_roots(X + 1, Count + 1, L, R, K);
                false -> iterate_roots(X + 1, Count, L, R, K)
            end
    end.

bounded_power(_, 0, _) ->
    1;
bounded_power(X, K, R) ->
    Partial = bounded_power(X, K - 1, R),
    Value = X * Partial,
    case Value > R of
        true -> R + 1;
        false -> Value
    end.