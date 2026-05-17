# @param {String} s
# @return {Boolean}
def is_adjacent_diff_at_most_two(s)
  (1...s.length).each do |i|
    return false if (s[i].ord - s[i - 1].ord).abs > 2
  end
  true
end