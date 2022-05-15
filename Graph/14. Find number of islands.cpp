  public:
    // Function to find the number of islands.
    void dfs(vector<vector<char>>&grid, int i, int j){
        if(i < 0 || j < 0 || i > grid.size()-1 || j > grid[0].size()-1 || grid[i][j] == '0')return; //base conditions
        grid[i][j] = '0';
        //all directions
        dfs(grid, i, j+1);
        dfs(grid, i+1, j+1);
        dfs(grid, i+1, j);
        dfs(grid, i+1, j-1);
        dfs(grid, i, j-1);
        dfs(grid, i-1, j-1);
        dfs(grid, i-1, j);
        dfs(grid, i-1, j+1);
    }
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int island = 0;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] == '1'){ //if 1 is there means definitely 1 island
                    dfs(grid, i, j);
                    island++;
                }
            }
        }
        return island;
    }
};
