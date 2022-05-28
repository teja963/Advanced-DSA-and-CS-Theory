 int orangesRotting(vector<vector<int>>& grid) {
        // Code here
        int x[] = {-1, 1, 0, 0};
        int y[] = {0, 0, -1, 1};
        queue<pair<int, int>>q;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] == 2)q.push({i, j});
            }
        }
        int ans = 0;
        while(!q.empty()){
            int n = q.size();
            int flag = 0;
            while(n--){
                auto curr = q.front();
                q.pop();
                for(int i = 0; i < 4; i++){
                    int new_x = curr.first + x[i];
                    int new_y = curr.second + y[i];
                    if(new_x >= 0 and new_x < grid.size() and new_y >= 0 and new_y < grid[0].size() and grid[new_x][new_y] == 1){
                        q.push({new_x, new_y});
                        grid[new_x][new_y] = 2;
                        flag = 1;
                    }
                }
            }
            if(flag == 1)ans++;
        }
        for(int i = 0; i < grid.size(); i++){               //checking for unrotten oranges
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] == 1)return -1;
            }
        }
        return ans;
    }
};
