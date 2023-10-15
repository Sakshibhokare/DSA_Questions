vector<int> v;
    unordered_map<int, int> mp;
    RandomizedSet() {
        v.clear();
        mp.clear();
    }
    
    bool insert(int val) {
        if(mp.find(val) != mp.end()) return false;
        v.push_back(val);
        mp[val] = v.size() - 1;
        return true;
    }
    
    bool remove(int val) {
        if(mp.find(val) == mp.end()) return false;
        int idx = mp[val];
        mp[v[v.size() - 1]] = idx;
        swap(v[idx], v[v.size() - 1]);
        v.pop_back();
        mp.erase(val);
        return true;
    }
    
    int getRandom() {
        int val = rand() % v.size();
        return v[val];
    }
};
