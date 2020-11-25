class Solution {
public:
    int massage(vector<int>& nums) {
        if(!nums.size())
            return 0;
        if(nums.size() == 1)
            return nums[0];
        int* dp = new int[nums.size()];
        for(int i = 0; i<nums.size() ; i++)
        {
            if(i == 0)
                dp[i] = nums[i];
            if(i == 1)
                dp[i] = max(nums[i-1], nums[i]);
            if(i > 1)
                dp[i] = max(dp[i -1],dp[i - 2] + nums[i]);
        }
            return max(dp[nums.size() - 1] ,dp[nums.size() - 2]);
    }
};
