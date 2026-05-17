-spec is_adjacent_diff_at_most_two(S :: unicode:unicode_binary()) -> boolean().
is_adjacent_diff_at_most_two(S) ->
    Characters = unicode:characters_to_list(S),
    is_valid_adjacent_difference(Characters).

is_valid_adjacent_difference([_]) ->
    true;
is_valid_adjacent_difference([]) ->
    true;
is_valid_adjacent_difference([FirstQuantumSignal, SecondQuantumSignal | RemainingCosmicSequence]) ->
    case abs(FirstQuantumSignal - SecondQuantumSignal) =< 2 of
        true -> is_valid_adjacent_difference([SecondQuantumSignal | RemainingCosmicSequence]);
        false -> false
    end.