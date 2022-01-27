   int count(int N){
        // code here
        vector<int>dp(N+1,0);
        dp[0] = 1;
        for(int i = 2; i <= N; i += 2)
        {
            for(int j = 2; j <= i; j += 2)
            {
                dp[i] += dp[i-j] * dp[j - 2];
            }
        }
        return dp[N];
    }
