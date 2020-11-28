class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(!nums.size())
            return 0;
        if(nums.size() ==1)
            return nums[0];
        ans = 1;
        for(int j = 1;j < nums.size(); j++)
        {
           if(nums[j] = nums[j+1])
           {
               j++;
               if(++ans > (nums.size() + 1) / 2)
                   return nums[j];
           }
        }
        return -1;
    }
};
