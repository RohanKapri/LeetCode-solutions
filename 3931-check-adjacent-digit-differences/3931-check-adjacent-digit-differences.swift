class Solution {
    func isAdjacentDiffAtMostTwo(_ s: String) -> Bool {
        let chars = Array(s)
        for i in 1..<chars.count {
            let diff = abs(Int(chars[i].asciiValue!) - Int(chars[i - 1].asciiValue!))
            if diff > 2 {
                return false
            }
        }
        return true
    }
}