class Solution{
public:
    long long int arrangeTiles(int N){
        // code here
        vector<long long int>dp(N+1, 1);
        for(int i = 4; i <= N; i++){
            dp[i] = dp[i-1] + dp[i-4];
        }
        return dp[N];
    }
};
