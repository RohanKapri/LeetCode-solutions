from typing import List

class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        if len(nums1) > len(nums2):
            return self.findMedianSortedArrays(nums2, nums1)

        len1, len2 = len(nums1), len(nums2)
        low, high = 0, len1
        midCount = (len1 + len2 + 1) // 2

        while low <= high:
            cutA = (low + high) // 2
            cutB = midCount - cutA

            if cutA < high and nums1[cutA] < nums2[cutB - 1]:
                low = cutA + 1
            elif cutA > low and nums1[cutA - 1] > nums2[cutB]:
                high = cutA - 1
            else:
                maxLeft = 0
                if cutA == 0:
                    maxLeft = nums2[cutB - 1]
                elif cutB == 0:
                    maxLeft = nums1[cutA - 1]
                else:
                    maxLeft = max(nums1[cutA - 1], nums2[cutB - 1])

                if (len1 + len2) % 2 == 1:
                    return maxLeft

                minRight = 0
                if cutA == len1:
                    minRight = nums2[cutB]
                elif cutB == len2:
                    minRight = nums1[cutA]
                else:
                    minRight = min(nums1[cutA], nums2[cutB])

                return (maxLeft + minRight) / 2.0

        return 0.0
