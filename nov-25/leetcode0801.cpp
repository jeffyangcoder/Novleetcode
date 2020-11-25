class Solution {
public:
    int waysToStep(int n) {
        unsigned int dp[4]={1,0,0,0};    
        for(int i = 0;i < n; i++)
        {
            dp[3] = dp[2];
            dp[2] = dp[1];
            dp[1] = dp[0];
            dp[0] = (dp[1] + dp[2] + dp[3]) % 1000000007;
        }
        return (int(dp[0]));
    }
};
