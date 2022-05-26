 int maximizeTheCuts(int n, int x, int y, int z)
    {
        //Your code here
        vector<int>v(4);
        vector<vector<int>>dp(4,vector<int>(n+1,INT_MIN));
        v[0] = x;
        v[1] = y;
        v[2] = z;
        for(int i = 1; i <= 3; i++)
        {
            dp[i][0] = 0;
        }
        for(int i = 1; i <= 3; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                if(j - v[i-1] >= 0)
                {
                    dp[i][j] = max(dp[i-1][j], 1 + dp[i][j - v[i-1]]); 
                }
                else
                {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[3][n] < 0 ? 0: dp[3][n];
    }
