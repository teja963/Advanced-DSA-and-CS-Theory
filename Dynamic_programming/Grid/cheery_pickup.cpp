class Solution {
public:
    int fun(int r1, int c1, int c2, vector<vector<int>>&grid, int dp[51][51][51]){
        /*r1 + c1 = r2 + c2*/
        int r2 = r1 + c1 - c2;
        if(r1 >= grid.size() || c1 >= grid.size() || r2 >= grid.size() || c2 >= grid.size() || grid[r1][c1] == -1 || grid[r2][c2] == -1)return INT_MIN;

        /*already calculated*/
        if(dp[r1][c1][c2] != 0)return dp[r1][c1][c2];

        if(r1 == grid.size()-1 && c1 == grid.size()-1)return grid[r1][c1]; /*directly reached*/
        
        /*picking at once and different correct logical thinking*/
        int result = grid[r1][c1];
        if(r1 != r2)result += grid[r2][c2];

        /*possibilties choosing max - DD,RR,DR, RD */

        int best_move = max(fun(r1+1, c1, c2, grid, dp), fun(r1, c1+1, c2+1, grid, dp));
        best_move = max(best_move, fun(r1+1, c1, c2+1, grid, dp));
        best_move = max(best_move, fun(r1, c1+1, c2, grid, dp));
        result += best_move;
        dp[r1][c1][c2] = result;
        return result;

    }
    int cherryPickup(vector<vector<int>>& grid) {
        /*traversing from top to bottom*/
        int dp[51][51][51];
        memset(dp, 0, sizeof(dp));
        return max(0, fun(0,0,0,grid, dp));
    }
};
