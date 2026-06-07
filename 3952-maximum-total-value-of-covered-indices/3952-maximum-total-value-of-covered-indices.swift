class Solution {
    func maxTotal(_ nums: [Int], _ s: String) -> Int {
        let neg = Int64(-1000000000000000000)
        
        var dp0: Int64 = 0
        var dp1: Int64 = neg
        
        let chars = Array(s)
        
        for i in 0..<nums.count {
            var nxt0: Int64 = neg
            var nxt1: Int64 = neg
            
            if chars[i] == "0" {
                nxt0 = max(dp0, dp1)
            } else {
                nxt1 = max(dp0, dp1) + Int64(nums[i])
                
                if i > 0 {
                    nxt0 = dp0 + Int64(nums[i - 1])
                }
            }
            
            dp0 = nxt0
            dp1 = nxt1
        }
        
        return Int(max(dp0, dp1))
    }
}