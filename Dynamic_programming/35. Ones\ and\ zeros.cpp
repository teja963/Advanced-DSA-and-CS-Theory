class Solution {
public:
    // int ans = 0, size = 0; 
    // void fun(vector<string>&str, int m, int n, int start){
    //     if(m == 0 and n == 0){
    //         ans = max(ans, size);
    //         return;
    //     }
    //     for(int i = start; i < str.size(); i++){
    //         string tmp = str[i];
    //         int count_m = count(tmp.begin(), tmp.end(), '0');
    //         int count_n = tmp.size() - count_m;
    //         if(m >= count_m and n >= count_n){
    //             size++;
    //             fun(str, m-count_m, n-count_n, i+1);
    //             size--;
    //         }
    //     }
    // }
    int findMaxForm(vector<string>& strs, int m, int n) {
        int dp[101][101] = {0};
        for(auto x: strs){
            int count_m = count(x.begin(), x.end(), '0');
            int count_n = x.size() - count_m;
            for(int i = m; i >= count_m; i--){
                for(int j = n; j >= count_n; j--){
                    if(i >= count_m and j >= count_n){
                        dp[i][j] = max(dp[i][j], 1 + dp[i-count_m][j-count_n]);
                    }
                }
            }   
        }
        return dp[m][n];
    }
};
