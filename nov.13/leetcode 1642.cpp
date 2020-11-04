
class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int n = heights.size();
        
        priority_queue<int, vector<int>, greater<int>> q;
     
        int HH = 0;
        for (int i = 1; i < n; ++i) {
            int deltaH = heights[i] - heights[i - 1];
            if (deltaH > 0) {
                q.push(deltaH);

                if (q.size() > ladders) {
                    HH += q.top();
                    q.pop();
                }
                if (HH > bricks) {
                    return i - 1;
                }
            }
        }
        return n - 1;
    }
};

