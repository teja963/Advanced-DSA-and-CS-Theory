class Solution {
public:
    int x[4] = {-1, 0, 1, 0};
    int y[4] = {0, 1, 0, -1};
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size(); 
        vector<vector<int>>vis(m, vector<int>(n, -1));
        vector<vector<int>>ans(m, vector<int>(n, -1));
        queue<pair<pair<int, int>, int>>q; 
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(mat[i][j] == 0){
                    vis[i][j] = 1;
                    q.push({{i, j}, 0});
                }
                else vis[i][j] = 0;
            }
        }
        while(!q.empty()){
            int row = q.front().first.first;
            int col = q.front().first.second;
            int step = q.front().second;
            q.pop();
            ans[row][col] = step;
            for(int k = 0; k < 4; k++){
                int new_x = row + x[k];
                int new_y = col + y[k];
                if(new_x >= 0 && new_y >= 0 && new_x < mat.size() && new_y < mat[0].size() && vis[new_x][new_y] == 0){
                    q.push({{new_x, new_y}, step+1});
                    vis[new_x][new_y] = 1;    
                }
            }
        }
        return ans;
    }
};
