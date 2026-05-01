import java.util.*;

public class Solution {
    public List<Integer> countSmaller(int[] nums) {
        int n = nums.length;
        List<Integer> result = new ArrayList<>(Collections.nCopies(n, 0));
        
        // We need to store the indexes and their corresponding values in the original array
        Integer[] indices = new Integer[n];
        for (int i = 0; i < n; i++) {
            indices[i] = i;
        }
        
        // Helper function to merge the indices and count smaller numbers
        mergeSort(nums, indices, result, 0, n - 1);
        
        return result;
    }
    
    private void mergeSort(int[] nums, Integer[] indices, List<Integer> result, int left, int right) {
        if (left >= right) {
            return;
        }
        
        int mid = left + (right - left) / 2;
        mergeSort(nums, indices, result, left, mid);
        mergeSort(nums, indices, result, mid + 1, right);
        
        merge(nums, indices, result, left, mid, right);
    }
    
    private void merge(int[] nums, Integer[] indices, List<Integer> result, int left, int mid, int right) {
        Integer[] temp = new Integer[right - left + 1];
        int i = left, j = mid + 1, k = 0;
        int rightCount = 0;
        
        // Merging two halves and counting smaller elements on the right side
        while (i <= mid && j <= right) {
            if (nums[indices[i]] <= nums[indices[j]]) {
                result.set(indices[i], result.get(indices[i]) + rightCount);
                temp[k++] = indices[i++];
            } else {
                rightCount++;
                temp[k++] = indices[j++];
            }
        }
        
        // Copy remaining elements from the left part
        while (i <= mid) {
            result.set(indices[i], result.get(indices[i]) + rightCount);
            temp[k++] = indices[i++];
        }
        
        // Copy remaining elements from the right part
        while (j <= right) {
            temp[k++] = indices[j++];
        }
        
        // Copy the sorted indices back to the original array
        System.arraycopy(temp, 0, indices, left, temp.length);
    }
    
    public static void main(String[] args) {
        Solution solution = new Solution();
        int[] nums = {5, 2, 6, 1};
        List<Integer> result = solution.countSmaller(nums);
        System.out.println(result);  // Output: [2, 1, 1, 0]
    }
}
