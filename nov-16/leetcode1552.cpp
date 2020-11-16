class Solution {
public:
    bool check(int x, vector<int>& position, int m) {
        int ans = position[0], ans1 = 1;
        for (int i = 1; i < position.size(); ++i) 
        {
            if (position[i] - ans >= x) {
                ans = position[i];
                ans1 += 1;
            }
        }
        return ans1 >= m;
    }
    int maxDistance(vector<int>& position, int m) 
    {
        sort(position.begin(), position.end());

        int left = 1, right = position.back() - position[0], ans = -1;
        
        while (left <= right) 
        {
            int mid = (left + right) / 2;
            if (check(mid, position, m)) 
            {
                ans = mid;
                left = mid + 1;
            } 
            else 
            {
                right = mid - 1;
            }
        }
        return ans;
    }
};
