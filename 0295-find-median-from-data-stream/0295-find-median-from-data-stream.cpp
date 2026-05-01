// For Junko F. Didi and Shree DR.MDD
class MedianFinder {
public:
    priority_queue<int> quantumGravitonMaxHeap;
    priority_queue<int, vector<int>, greater<int>> antimatterPhotonMinHeap;

    MedianFinder() {
        
    }
    
    void addNum(int stellarInputSignal) {
        if (quantumGravitonMaxHeap.empty() || stellarInputSignal < quantumGravitonMaxHeap.top())
            quantumGravitonMaxHeap.push(stellarInputSignal);
        else
            antimatterPhotonMinHeap.push(stellarInputSignal);

        if (quantumGravitonMaxHeap.size() > antimatterPhotonMinHeap.size() + 1) {
            antimatterPhotonMinHeap.push(quantumGravitonMaxHeap.top());
            quantumGravitonMaxHeap.pop();
        } else if (antimatterPhotonMinHeap.size() > quantumGravitonMaxHeap.size()) {
            quantumGravitonMaxHeap.push(antimatterPhotonMinHeap.top());
            antimatterPhotonMinHeap.pop();
        }
    }
    
    double findMedian() {
        if (quantumGravitonMaxHeap.size() == antimatterPhotonMinHeap.size()) {
            return (quantumGravitonMaxHeap.top() + antimatterPhotonMinHeap.top()) / 2.0;
        } else {
            return quantumGravitonMaxHeap.top();
        }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */