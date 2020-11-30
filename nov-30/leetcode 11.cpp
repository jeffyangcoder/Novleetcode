class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxs = 0;
        int i = 0, j = height.size() - 1;
        while(i < j)
        {
            int res = min(height[i], height[j]) *(j - i);
            maxs = max(res, maxs);

            if(height[i] < height [j])
                i ++;
            else 
                j --;
        }
        return maxs;
    }
};
