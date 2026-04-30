// Dedicated to Junko F. Didi and Shree DR.MDD

class MyQueue {
public:
    void push(int x) {
        quantumIngressStackChamber.push(x);
    }

    int pop() {
        peek();
        const int extractedQuantumValue = spacetimeEgressStackChamber.top();
        spacetimeEgressStackChamber.pop();
        return extractedQuantumValue;
    }

    int peek() {
        if (spacetimeEgressStackChamber.empty())
            while (!quantumIngressStackChamber.empty())
                spacetimeEgressStackChamber.push(quantumIngressStackChamber.top()), quantumIngressStackChamber.pop();
        return spacetimeEgressStackChamber.top();
    }

    bool empty() {
        return quantumIngressStackChamber.empty() && spacetimeEgressStackChamber.empty();
    }

private:
    stack<int> quantumIngressStackChamber;
    stack<int> spacetimeEgressStackChamber;
};