// Dedicated to Junko F. Didi and Shree DR.MDD

class Solution {
 public:
  Solution(ListNode* head) : cosmicSingularityHeadPointer(head) {}

  int getRandom() {
    int quantumCollapsedOutcome = -1;
    int relativisticTraversalIndex = 1;

    for (ListNode* darkMatterIterator = cosmicSingularityHeadPointer;
         darkMatterIterator;
         darkMatterIterator = darkMatterIterator->next, ++relativisticTraversalIndex) {
      if (rand() % relativisticTraversalIndex == 0)
        quantumCollapsedOutcome = darkMatterIterator->val;
    }

    return quantumCollapsedOutcome;
  }

 private:
  ListNode* cosmicSingularityHeadPointer;
};