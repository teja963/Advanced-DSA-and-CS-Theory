class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
     int row = grid.size();
     int col = grid[0].size();
        for(int i = 1; i < col; i++)grid[0][i] += grid[0][i-1];   //filing 1st row
        for(int i = 1; i < row; i++)grid[i][0] += grid[i-1][0];   //filing 1st col
        for(int i = 1; i < row; i++)
        {
            for(int j = 1; j < col; j++)
            {
                grid[i][j] += min(grid[i-1][j], grid[i][j-1]);
            }
        }
        return grid[row-1][col-1];
        
    }
