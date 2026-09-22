// Jai Shree DR.MDD \U0001f338\U0001f6a9
#include <bits/stdc++.h>
using namespace std;

static const int MAXK = 5;

struct SegmentNode {
    int product;
    int frequency[MAXK];
    SegmentNode(int k = 0) {
        product = 1 % max(1, k);
        memset(frequency, 0, sizeof(frequency));
    }
};

class Solution {
    int arraySize, modValue, treeSize;
    vector<SegmentNode> segmentTree;
    
    SegmentNode combineNodes(const SegmentNode &left, const SegmentNode &right) const {
        SegmentNode result(modValue);
        result.product = int((1LL * left.product * right.product) % modValue);
        
        for (int i = 0; i < modValue; ++i) result.frequency[i] = left.frequency[i];
        
        for (int i = 0; i < modValue; ++i) {
            int count = right.frequency[i];
            if (count) {
                int remainder = int((1LL * left.product * i) % modValue);
                result.frequency[remainder] += count;
            }
        }
        return result;
    }

    void initializeSegmentTree(const vector<int> &inputArray) {
        treeSize = 1;
        while (treeSize < arraySize) treeSize <<= 1;
        segmentTree.assign(2 * treeSize, SegmentNode(modValue));
        
        for (int i = 0; i < arraySize; ++i) {
            int value = inputArray[i] % modValue;
            SegmentNode &node = segmentTree[treeSize + i];
            node = SegmentNode(modValue);
            node.product = value;
            node.frequency[value] = 1;
        }
        
        for (int i = treeSize - 1; i > 0; --i) {
            segmentTree[i] = combineNodes(segmentTree[2*i], segmentTree[2*i + 1]);
        }
    }

    void updateTree(int index, int valueMod) {
        int position = treeSize + index;
        segmentTree[position] = SegmentNode(modValue);
        segmentTree[position].product = valueMod;
        segmentTree[position].frequency[valueMod] = 1;
        
        for (position >>= 1; position > 0; position >>= 1) {
            segmentTree[position] = combineNodes(segmentTree[2*position], segmentTree[2*position + 1]);
        }
    }

    SegmentNode queryTree(int leftIndex, int rightIndex) const {
        SegmentNode leftResult(modValue), rightResult(modValue);
        for (leftIndex += treeSize, rightIndex += treeSize; leftIndex <= rightIndex; leftIndex >>= 1, rightIndex >>= 1) {
            if (leftIndex & 1)  leftResult = combineNodes(leftResult, segmentTree[leftIndex++]);
            if (!(rightIndex & 1)) rightResult = combineNodes(segmentTree[rightIndex--], rightResult);
        }
        return combineNodes(leftResult, rightResult);
    }

public:
    vector<int> resultArray(vector<int>& nums, int modValue, vector<vector<int>>& queries) {
        arraySize = nums.size();
        this->modValue = modValue;
        initializeSegmentTree(nums);
        
        int queryCount = queries.size();
        vector<int> result(queryCount);
        
        for (int i = 0; i < queryCount; ++i) {
            updateTree(queries[i][0], queries[i][1] % modValue);
            SegmentNode node = queryTree(queries[i][2], arraySize - 1);
            result[i] = node.frequency[queries[i][3]];
        }
        return result;
    }
};
