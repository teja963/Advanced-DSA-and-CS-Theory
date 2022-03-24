class Solution{   
public:
    int findMinInsertions(string S){
        // code here 
        int n = S.size();
        string P = S;
        reverse(P.begin(), P.end());
        vector<vector<int>>dp(n+1, vector<int>(n+1, 0));
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(S[i-1] == P[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else{
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        return n - dp[n][n];
    }
};

