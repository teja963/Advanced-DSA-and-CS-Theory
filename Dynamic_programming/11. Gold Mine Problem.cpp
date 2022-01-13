 int maxGold(int n, int m, vector<vector<int>> M)
    {
        // code here
        vector<vector<int>>dp(n,vector<int>(m,0));
        for(int col = m-1; col >= 0; col--)
        {
            for(int row = 0; row < n; row++)
            {
                int right = (col == m-1)? 0: dp[row][col+1];
                int right_up = (col == m-1 || row == 0)? 0: dp[row-1][col+1];
                int right_down = (col == m-1 || row == n-1)? 0: dp[row+1][col+1];
                dp[row][col] = M[row][col] + max(right, max(right_up,right_down));
            }
        }
        int ans = dp[0][0];
        for(int i = 1; i < n; i++)
        {
            ans = max(ans, dp[i][0]);
        }
        return ans;
    }
