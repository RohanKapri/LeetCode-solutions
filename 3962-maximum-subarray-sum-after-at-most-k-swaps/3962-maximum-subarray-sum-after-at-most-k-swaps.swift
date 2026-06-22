class Solution {
    func maxSum(_ nums: [Int], _ k: Int) -> Int {
        
        let n = nums.count
        
        var ans = Int.min
        
        if k == 0 || n == 1 {
            var sm = 0
            
            for num in nums {
                sm += num
                ans = max(ans, sm)
                
                if sm < 0 {
                    sm = 0
                }
            }
            
            return ans
        }
        
        var cnt = 0
        var cur = 0
        var pref = Array(repeating: 0, count: n + 1)
        
        for i in 0..<n {
            if nums[i] >= 0 {
                cur += nums[i]
            } else {
                cnt += 1
            }
            
            pref[i + 1] = pref[i] + nums[i]
            ans = max(ans, nums[i])
        }
        
        if cnt <= k {
            return cur
        }
        
        var dp = Array(repeating: Array(repeating: 0, count: n), count: n)
        
        for i in 0..<n {
            var pq = [Int]()
            var sm = 0
            
            for j in i..<n {
                if nums[j] >= 0 {
                    dp[i][j] = sm
                    continue
                }
                
                if pq.count < k {
                    pq.append(nums[j])
                    pq.sort(by: >)
                    sm += nums[j]
                } else if pq[0] > nums[j] {
                    sm -= pq[0]
                    pq[0] = nums[j]
                    pq.sort(by: >)
                    sm += nums[j]
                }
            }
        }
        
        for i in 0..<n {
            var pqMax = [Int]()
            var sm = 0
            
            for j in 0..<i {
                if nums[j] < 0 {
                    continue
                }
                
                if pqMax.count < k {
                    pqMax.append(nums[j])
                    pqMax.sort()
                    sm += nums[j]
                } else if pqMax[0] < nums[j] {
                    sm -= pqMax[0]
                    pqMax[0] = nums[j]
                    pqMax.sort()
                    sm += nums[j]
                }
            }
            
            if i + 1 < n {
                for j in stride(from: n - 1, through: i + 1, by: -1) {
                    var curSum = pref[j + 1] - pref[i]
                    curSum -= dp[i][j]
                    curSum += sm
                    
                    ans = max(ans, curSum)
                    
                    if nums[j] < 0 {
                        continue
                    }
                    
                    if pqMax.count < k {
                        pqMax.append(nums[j])
                        pqMax.sort()
                        sm += nums[j]
                    } else if pqMax[0] < nums[j] {
                        sm -= pqMax[0]
                        pqMax[0] = nums[j]
                        pqMax.sort()
                        sm += nums[j]
                    }
                    
                    if !pqMax.isEmpty {
                        ans = max(ans, sm)
                    }
                }
            }
        }
        
        return ans
    }
}