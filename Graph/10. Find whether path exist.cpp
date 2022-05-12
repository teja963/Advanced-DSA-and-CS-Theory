class Solution
{
    public:
    //Function to find whether a path exists from the source to destination.
    bool dfs(int i, int j, vector<vector<int>>&grid){
        if(i < 0 || i >= grid.size() || j < 0 || j >= grid.size() || grid[i][j] == 0)return false;
        if(grid[i][j] == 1)return true;
        grid[i][j] = 0;
        return dfs(i+1, j, grid) || dfs(i-1, j, grid) || dfs(i, j+1, grid) || dfs(i, j-1, grid); 
    }
    bool is_Possible(vector<vector<int>>& grid) 
    {
        //code here
        int n = grid.size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == 2){
                    if(dfs(i, j, grid))return true;
                }
            }
        }
        return false;
    }
};
