class Solution {
public:
    int countVowelStrings(int n) {
        if (!n)
            return 0;
        if(n == 1)
            return 5;
        int dp [n + 1][5];
        dp [1][0] = 1;
        dp [1][1] = 2;
        dp [1][2] = 3;
        dp [1][3] = 4;
        dp [1][4] = 5;
        
        for( int i = 2 ; i < n + 1 ; i++)
        {   
            dp[i][0] = 1;
            for(int j = 1; j < 5 ; j++)
            {
                dp[i][j] = dp[i][j - 1] + dp[i - 1][j];
            }
        }
            return dp[n][4];
    }
};
