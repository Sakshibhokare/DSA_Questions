class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        sort(nums.begin(), nums.end());
        int longest=1;
        int count=0;
        int lastSmall=INT_MIN;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]-1==lastSmall){
                count++;
                lastSmall=nums[i];
            }
            else if(lastSmall!=nums[i]){
                count=1;
                lastSmall=nums[i];
            }
            longest=max(longest, count);
        }
        return longest;
    }
};
