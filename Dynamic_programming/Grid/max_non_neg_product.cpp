class Solution {
public:
    int maxProductPath(vector<vector<int>>& grid){
        int m = grid.size();
        int n = grid[0].size();
        long long int mx[16][16], mn[16][16];
        mx[0][0] = mn[0][0] = grid[0][0];
        for(int i = 1; i < m; i++){
            grid[i][0] *= grid[i-1][0];
            mx[i][0] = mn[i][0] = grid[i][0];
        }
        for(int i = 1; i < n; i++){
            grid[0][i] *= grid[0][i-1];
            mx[0][i] = mn[0][i] = grid[0][i];
        }
        for(int i = 1; i < grid.size(); i++){
            for(int j = 1; j < grid[0].size(); j++){
                if(grid[i][j] < 0){
                    mx[i][j] = grid[i][j] * min(mn[i][j-1], mn[i-1][j]);
                    mn[i][j] = grid[i][j] * max(mx[i][j-1], mx[i-1][j]);
                }
                else{
                    mx[i][j] = grid[i][j] * max(mx[i][j-1], mx[i-1][j]);
                    mn[i][j] = grid[i][j] * min(mn[i][j-1], mn[i-1][j]);
                }
            }
        }
        return mx[m-1][n-1] < 0? -1: mx[m-1][n-1]%1000000007;
    }
};
