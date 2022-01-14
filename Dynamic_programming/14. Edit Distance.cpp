/*
# Recursive:
      fun(m,n,s,t):
         if(m == 0)return n;
         if(n == 0)return m;
         if(s[m-1] == t[n-1])return fun(m-1,n-1,s,t);
         return 1 + min(fun(m-1,n,s,t), fun(m,n-1,s,t), fun(m-1,n-1,s,t));
*/


 int m = s.size(), n = t.size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,0));
        /* Base conditions*/
        for(int i = 0; i <= m ; i++)
        {
            dp[i][0] = i;
        }
        for(int i = 0; i <= n; i++)
        {
            dp[0][i] = i;
        }
        /* Optimal cases*/
        for(int i = 1; i <= m; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                if(s[i-1] == t[j-1])                      //if characters matches
                {
                    dp[i][j] = dp[i-1][j-1];    
                }
                else                            //else min of remove , insert, replace
                {
                    dp[i][j] = min(dp[i-1][j], min( dp[i][j-1] , dp[i-1][j-1])) + 1;
                }
            }
        }
        return dp[m][n];
