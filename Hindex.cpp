class Solution {
public:
    int hIndex(vector<int>& c) {
        int n = c.size();
        sort(c.begin(),c.end()); 
        int h = n;
        for(int i=0; i<n; i++){
            if(c[i]>=h) return h;
            h--;
        }
        return h;
        
    }
};
