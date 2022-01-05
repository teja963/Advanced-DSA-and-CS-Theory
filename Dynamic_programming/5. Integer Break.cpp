class Solution {
public:
//       long long int tmp = 1, ans  = INT_MIN;
//     void fun(int n, int id)
//     { 
//         if(n < 0)return;
//         else if(n == 0)
//         {
//             ans = max(ans,tmp);
//         }
//         for(int i = id; i >= 1; i--)
//         {
//             tmp *= i;
//             fun(n - i,i);
//             tmp /= i;
//         }
        
//     }
//     fun(n,n-1);
    
    int integerBreak(int n) {
       vector<int>dp(n+1,1);
       for(int i = 2; i <= n;i++)
       {
           for(int j = 1; j <= i;j++)
           {
               if(j != n)
               {
                  dp[i] = max(dp[i], dp[i-j]*j);       
               }
              
           }
       }
        return dp[n];
    }
};
