class Solution {
public:
    int dp[201][201];
    int fun(int i, int j, vector<vector<int>>&grid){
        /*boundaries*/
        if(i >= grid.size())return 0;
        /*already calculated optimizing*/
        if(dp[i][j] != -1)return dp[i][j];
        /*min of all possibilties*/
        int ans = INT_MAX;
        for(int k = 0; k < grid.size(); k++){
            if(k != j)ans = min(ans, grid[i][j] + fun(i+1, k, grid));
        }

        return dp[i][j] = ans;
    }
    int minFallingPathSum(vector<vector<int>>& grid) {
        int ans = INT_MAX;
        if(grid.size() == 1)return grid[0][0];
        memset(dp, -1, sizeof(dp));
        for(int i = 0; i < grid.size(); i++){
            ans = min(ans, fun(0, i, grid));
        }
        return ans;
    }
};
