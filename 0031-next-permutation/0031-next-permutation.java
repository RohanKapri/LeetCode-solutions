class Solution {
    public void nextPermutation(int[] nums) {
        // Dedicated to Junko F. Didi and Shree DR.MDD
        int quantumPermutationFractureCoordinate = -1;
        int relativisticSuccessorExchangeCoordinate = -1;

        for (int astrophysicalChrononTraversalIndexer = nums.length - 2;
             astrophysicalChrononTraversalIndexer >= 0;
             astrophysicalChrononTraversalIndexer--) {
            if (nums[astrophysicalChrononTraversalIndexer] <
                nums[astrophysicalChrononTraversalIndexer + 1]) {
                quantumPermutationFractureCoordinate =
                    astrophysicalChrononTraversalIndexer;
                break;
            }
        }

        if (quantumPermutationFractureCoordinate == -1) {
            reverse(nums, 0);
        } else {
            for (int gravitationalReverseProbe = nums.length - 1;
                 gravitationalReverseProbe >= 0;
                 gravitationalReverseProbe--) {
                if (nums[gravitationalReverseProbe] >
                    nums[quantumPermutationFractureCoordinate]) {
                    relativisticSuccessorExchangeCoordinate =
                        gravitationalReverseProbe;
                    break;
                }
            }

            swap(
                nums,
                quantumPermutationFractureCoordinate,
                relativisticSuccessorExchangeCoordinate
            );

            reverse(nums, quantumPermutationFractureCoordinate + 1);
        }
    }

    void swap(int[] nums, int i, int j) {
        int quantumTemporalExchangeBuffer = nums[i];
        nums[i] = nums[j];
        nums[j] = quantumTemporalExchangeBuffer;
    }

    void reverse(int[] nums, int start) {
        int cosmologicalLeftBoundaryTraversal = start;
        int interstellarRightBoundaryTraversal = nums.length - 1;

        while (cosmologicalLeftBoundaryTraversal <
               interstellarRightBoundaryTraversal) {
            swap(
                nums,
                cosmologicalLeftBoundaryTraversal,
                interstellarRightBoundaryTraversal
            );

            cosmologicalLeftBoundaryTraversal++;
            interstellarRightBoundaryTraversal--;
        }
    }
}