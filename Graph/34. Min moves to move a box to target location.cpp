class Solution {
public:
    int x[4] = {-1, 0, 1, 0};
    int y[4] = {0, 1, 0, -1};
    bool valid(int i, int j, int m, int n){
        if(i >= 0 && j >= 0 && i < m && j < n)return true;
        return false;
    }
    bool reachable(int src_i, int src_j, int dst_i, int dst_j, vector<vector<char>>&grid, vector<vector<int>>&visi){
        if(src_i == dst_i && src_j == dst_j)return true;
        visi[src_i][src_j] = 1;
        for(int k = 0; k < 4; k++){
            int new_i = src_i + x[k];
            int new_j = src_j + y[k];
            if(valid(new_i, new_j, grid.size(), grid[0].size()) && grid[new_i][new_j] != '#' && !visi[new_i][new_j]){
                if(reachable(new_i, new_j, dst_i, dst_j, grid, visi))return true;
            }
        }
        return false;
    }
    int minPushBox(vector<vector<char>>& grid) {
        queue<vector<int>>q;
        pair<int, int>ply, box, target;
        int m = grid.size();
        int n = grid[0].size();
        for(int i = 0; i < m ;i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == 'B'){
                    box.first = i;
                    box.second = j;
                }
                else if(grid[i][j] == 'S'){
                    ply.first = i;
                    ply.second = j;
                }
                else if(grid[i][j] == 'T'){
                    target.first = i;
                    target.second = j;
                }
            }
        }
        int steps = 0;
        set<vector<int>>s;
        //s.insert({box.first, box.second, ply.first, ply.second});
        q.push({box.first, box.second, ply.first, ply.second});
        while(!q.empty()){
            int size = q.size();
            while(size--){
                vector<int>tmp = q.front();
                q.pop();
                if(tmp[0] == target.first && tmp[1] == target.second)return steps;
                grid[tmp[0]][tmp[1]] = '#';
                for(int k = 0; k < 4; k++){
                    int new_i = tmp[0] + x[k];
                    int new_j = tmp[1] + y[k];
                    int newPlayer_i = tmp[0] - x[k];
                    int newPlayer_j = tmp[1] - y[k];
                    vector<int>track({new_i, new_j, newPlayer_i, newPlayer_j});
                    vector<vector<int>>visi(m, vector<int>(n, 0));
                    if(valid(new_i, new_j, m, n) && grid[new_i][new_j] != '#' && reachable(tmp[2], tmp[3], newPlayer_i, newPlayer_j, grid, visi) && !s.count(track)){
                        s.insert(track);
                        q.push(track);
                    }
                }
                grid[tmp[0]][tmp[1]] = '.';
            }
            steps++;
        }
        return -1;
    }
};
