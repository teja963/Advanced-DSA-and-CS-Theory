class Solution {
public:
  
    int numSquares(int n) {
     
        vector<int>v(n+1,INT_MAX);
        v[0] = 0;
        for(int i = 1; i <= n ; i++)
        {
            for(int j = 1; j <= sqrt(i); j++)
            {
                v[i] = min(v[i] , v[i - j * j] + 1);
            }
        }
        return v[n];
    }
};


//Min No.of coins
int minCoins(int coins[], int M, int V) 
	{ 
	    // Your code goes here
	    //calculate(coins,M,V);
	    vector<int>dp(V+1,1e9);
	    dp[0] = 0;
	    for(int i = 1;i <= V; i++)
	    {
	        for(int j = 0; j < M; j++)
	        {
	            if(i >= coins[j])
	            {
	              dp[i] = min(dp[i], 1+dp[i-coins[j]]);
	            }
	        }
	    }
	    return dp[V] == 1e9? -1: dp[V];
	}
	  
};
