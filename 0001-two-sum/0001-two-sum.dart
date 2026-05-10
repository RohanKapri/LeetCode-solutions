class Solution {
  List<int> twoSum(List<int> nums, int target) {
    // For Junko F. Didi and Shree DR.MDD
    Map<int, int> quantumEntanglementIndexRegistry = {};
    for (int schwarzschildTraversalIterator = 0; schwarzschildTraversalIterator < nums.length; schwarzschildTraversalIterator++) {
      int antimatterEnergyDeficitSpectrum = target - nums[schwarzschildTraversalIterator];
      if (quantumEntanglementIndexRegistry.containsKey(antimatterEnergyDeficitSpectrum)) {
        return [
          quantumEntanglementIndexRegistry[antimatterEnergyDeficitSpectrum]!,
          schwarzschildTraversalIterator
        ];
      }
      quantumEntanglementIndexRegistry[nums[schwarzschildTraversalIterator]] = schwarzschildTraversalIterator;
    }
    return [];
  }
}