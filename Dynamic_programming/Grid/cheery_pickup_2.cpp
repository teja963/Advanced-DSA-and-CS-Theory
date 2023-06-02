class Solution {
public:
    int dp[71][71][71];
    int dir[3] = {-1, 0, 1};
    int fun(int r, int c1, int c2, vector<vector<int>>&grid){
        if(c1 < 0 || c2 < 0 || c1 >= grid[0].size() || c2 >= grid[0].size())return INT_MIN;
        
        /*reached bottom line after that can't go*/
        if(r == grid.size())return 0;
        if(dp[r][c1][c2] != -1)return dp[r][c1][c2];

        /*pick up cases*/
        int result = 0;
        if(c1 == c2){
            result = grid[r][c1];
        }
        else result += grid[r][c1] + grid[r][c2];

        /*possibilities 3*3*/
        int p_result = 0;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                p_result = max(p_result, fun(r+1, c1-dir[i], c2-dir[j], grid));
            }
        }

        result += p_result;
        return dp[r][c1][c2] = result;
    }
    int cherryPickup(vector<vector<int>>& grid) {
        memset(dp, -1, sizeof(dp));
        return fun(0, 0, grid[0].size()-1, grid);
    }
};
