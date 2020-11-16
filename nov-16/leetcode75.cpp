class Solution {
public:
    void sortColors(vector<int>& nums) {
        int a[3] = {0};
        int flag = 0;
        for(int i = 0;i< nums.size() ;i++)
            a[nums[i]] ++;

        for(int i = 0;i< nums.size() ;i++)
        {
            while(a[flag] <= 0)
            {
                flag ++;
            }
            nums[i] = flag;
            a[flag] --;
        }
    }
};
