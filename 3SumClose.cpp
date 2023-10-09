class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
       sort(nums.begin(), nums.end()); // O(Nlog2N)
        int ans = 1e7, diff = INT_MAX;
        for(int i = 0; i < nums.size(); i++) // O(N^2)
        {
            if(i > 0 && nums[i] == nums[i-1]) continue;
            int a = i+1, b = nums.size()-1, sum;
            while(b > a)
            {
                sum = nums[i] + nums[a] + nums[b];
                if(abs(target-sum) < diff)
                {
                    ans = sum;
                    diff = abs(target-sum);
                }
                if(sum > target) b--;
                else if(sum < target) a++;
                else return ans;
            }
        }
        return ans;
    }
};
