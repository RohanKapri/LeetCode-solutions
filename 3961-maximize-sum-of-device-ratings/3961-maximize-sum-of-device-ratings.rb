# @param {Integer[][]} units
# @return {Integer}
def max_ratings(units)
  m = units.length
  n = units[0].length

  if n == 1
    sum = 0
    (0...m).each do |i|
      sum += units[i][0]
    end
    return sum
  end

  total = 0
  mini_f = 1_000_000_000
  mini_s = 1_000_000_000

  (0...m).each do |i|
    fir_min = 1_000_000_000
    sec_min = 1_000_000_000

    units[i].each do |val|
      if val < fir_min
        sec_min = fir_min
        fir_min = val
      elsif val < sec_min
        sec_min = val
      end
    end

    total += sec_min
    mini_f = [mini_f, fir_min].min
    mini_s = [mini_s, sec_min].min
  end

  total - mini_s + mini_f
end