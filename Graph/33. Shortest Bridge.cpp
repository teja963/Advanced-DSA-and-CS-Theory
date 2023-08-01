class Solution {
public:
    int x[4] = {-1, 0, 1, 0};
    int y[4] = {0, 1, 0, -1};
    bool visi[101][101];
    void dfs(int i, int j, vector<vector<int>>&grid, queue<vector<int>>&q){
        if(i < 0 || j < 0 || i >= grid.size() || j >= grid.size() || grid[i][j] == 2 || grid[i][j] == 0)return;
        if(grid[i][j] == 1){
            grid[i][j] = 2;
            q.push({i,j});
            visi[i][j] = true;
        }
        for(int k = 0; k < 4; k++){
            dfs(i + x[k], j + y[k], grid, q);
        }
    }
    int bfs(queue<vector<int>>&q, vector<vector<int>>&grid){
        int steps = 0;
        int n = grid.size();
        while(!q.empty()){
            int size = q.size();
            while(size--){
                vector<int>tmp = q.front();
                q.pop();
                int i = tmp[0]; int j = tmp[1];
                for(int k = 0; k < 4; k++){
                    int new_i = i + x[k];
                    int new_j = j + y[k];
                    if(new_i >= 0 && new_j >= 0 && new_i < n && new_j < n && visi[new_i][new_j] != true){
                        if(grid[new_i][new_j] == 1)return steps;
                        visi[new_i][new_j] = true;
                        q.push({new_i, new_j});
                    }
                } 
            }
            steps++;
        }
        return 0;
    }
    int shortestBridge(vector<vector<int>>& grid) {
        int n = grid.size();
        int flag = 0;
        memset(visi, false, sizeof(visi));
        queue<vector<int>>q;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j]){
                    dfs(i, j, grid, q);
                    return bfs(q, grid);
                }
            }
        }
        return -1;
    }
};
