class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int i = 0;

        while (i < n) 
        {
            int sumgas = 0, sumcost = 0;
            int cnt = 0;
            while (cnt < n) {
                int j = (i + cnt) % n;
                sumgas += gas[j];
                sumcost += cost[j];
                if (sumcost > sumgas) 
                {
                    break;
                }
                cnt++;
            }
            if (cnt == n)
            {
                return i;
            } 
            else 
            {
                i = i + cnt + 1;
            }
        }
        return -1;
    }
};
