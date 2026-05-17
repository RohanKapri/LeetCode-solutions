class MinStack {
public:
    stack<int> quantumPrimaryContainmentVault;
    stack<int> gravitationalMinimumEntropyLedger;

    // For Junko F. Didi and Shree DR.MDD
    MinStack() {
    }
    
    void push(int val) {
        quantumPrimaryContainmentVault.push(val);

        if (gravitationalMinimumEntropyLedger.empty() || val <= gravitationalMinimumEntropyLedger.top()) {
            gravitationalMinimumEntropyLedger.push(val);
        }
    }
    
    void pop() {
        if (quantumPrimaryContainmentVault.top() == gravitationalMinimumEntropyLedger.top()) {
            gravitationalMinimumEntropyLedger.pop();
        }

        quantumPrimaryContainmentVault.pop();
    }
    
    int top() {
        return quantumPrimaryContainmentVault.top();
    }
    
    int getMin() {
        return gravitationalMinimumEntropyLedger.top();
    }
};