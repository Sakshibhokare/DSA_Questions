class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // brute force
        // for(i->n) 
        //     for(j=i+1; j->)
        //         check if(arr[i]+arr[j]==taregt)
        
        
        // optimal approach 
    //     using mapping 
    //          unordered_map<int, int> mpp;
    // for (int i = 0; i < n; i++) {
    //     int num = arr[i];
    //     int moreNeeded = target - num;
    //     if (mpp.find(moreNeeded) != mpp.end()) {
    //         return {mpp[moreNeeded], i};
    //     }
    //     mpp[num] = i;
    // }
    // return { -1, -1};
        
        
//         unordered_map<int, int> mp;

       

//         for(int i = 0; i < nums.size(); i++){
//           // target is not present into map then  add it with index 
//             if(mp.find(target - nums[i]) == mp.end())

//                 mp[nums[i]] = i;

//             else

//                 return {mp[target - nums[i]], i};

//         }

 

//         return {-1, -1};
        
        vector<pair<int,int>>mp;
        for(int i=0; i<nums.size(); i++){
            mp.push_back({nums[i], i});
        }
        sort(mp.begin(), mp.end());
        
        int s=0, e=nums.size()-1;
        while(s<e){
            int sum=mp[s].first+mp[e].first;
            if(sum==target){
                return {mp[s].second, mp[e].second};
            }
            else if(sum>target)e--;
            else s++;
        }
        return {-1, -1};
    }
};
