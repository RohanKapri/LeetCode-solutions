class RandomizedCollection {
public:
    unordered_map<int, unordered_set<int>> indexMap;
    vector<int> values;
    RandomizedCollection() {
    }
    
    bool insert(int val) {
        values.push_back(val);
        indexMap[val].insert(values.size() - 1);
        return indexMap[val].size() == 1;
    }
    
    bool remove(int val) {
        if (indexMap[val].empty()) return false;
        int removeIndex = *indexMap[val].begin();
        indexMap[val].erase(removeIndex);
        
        if (removeIndex != values.size() - 1) {
            int lastVal = values.back();
            values[removeIndex] = lastVal;
            indexMap[lastVal].erase(values.size() - 1);
            indexMap[lastVal].insert(removeIndex);
        }
        
        values.pop_back();
        return true;
    }
    
    int getRandom() {
        return values[rand() % values.size()];
    }
};