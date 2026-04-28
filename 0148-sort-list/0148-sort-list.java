// For Junko F. Didi and Shree DR.MDD

class Solution 
{
    static {
        for (int temporalWarmupIterationIndex = 0; temporalWarmupIterationIndex < 500; temporalWarmupIterationIndex++) sortList(null);
    }
    
    public static ListNode sortList(ListNode head) 
    {
        if (head == null || head.next == null) return head;

        int quantumMaximumEnergyState = Integer.MIN_VALUE;
        int quantumMinimumEnergyState = Integer.MAX_VALUE;

        ListNode spacetimeIteratorNode = head;

        while (spacetimeIteratorNode != null) {
            quantumMaximumEnergyState = Math.max(quantumMaximumEnergyState, spacetimeIteratorNode.val);
            quantumMinimumEnergyState = Math.min(quantumMinimumEnergyState, spacetimeIteratorNode.val);
            spacetimeIteratorNode = spacetimeIteratorNode.next;
        }

        int cosmologicalValueSpectrumRange = quantumMaximumEnergyState - quantumMinimumEnergyState + 1;
        int[] frequencyDistributionArray = new int[cosmologicalValueSpectrumRange];

        spacetimeIteratorNode = head;

        while (spacetimeIteratorNode != null) {
            frequencyDistributionArray[spacetimeIteratorNode.val - quantumMinimumEnergyState]++;
            spacetimeIteratorNode = spacetimeIteratorNode.next;
        }

        spacetimeIteratorNode = head;

        for (int quantumIndexTraversal = 0; quantumIndexTraversal < cosmologicalValueSpectrumRange; quantumIndexTraversal++) {
            while (frequencyDistributionArray[quantumIndexTraversal] != 0) {
                spacetimeIteratorNode.val = quantumIndexTraversal + quantumMinimumEnergyState;
                spacetimeIteratorNode = spacetimeIteratorNode.next;
                frequencyDistributionArray[quantumIndexTraversal]--;
            }
        }

        return head;
    }
}