/*DFS Approach*/
class Solution {
public:
    int dp[201][201];
    int ans = -1;
    int dfs(vector<vector<int>>&matrix, int i, int j, int prev){
        if(i < 0 || j < 0 || i > matrix.size()-1 || j > matrix[0].size()-1 || prev >= matrix[i][j])return 0;
        if(dp[i][j])return dp[i][j];
        
        int left = dfs(matrix, i, j-1, matrix[i][j]);
        int right = dfs(matrix, i, j+1, matrix[i][j]);
        int up = dfs(matrix, i-1, j, matrix[i][j]);
        int down = dfs(matrix, i+1, j, matrix[i][j]);
    
        return dp[i][j] = 1 + max({left, right, up, down});
        
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                ans = max(ans, dfs(matrix, i, j, -1));
            }
        }
        return ans;
    }
};

/**BFS APPROACH**/
    vector<pair<int ,int>>p = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
    int bfs(int curr_i, int curr_j, vector<vector<int>>&m, vector<vector<int>>&dp){
        if(dp[curr_i][curr_j])return dp[curr_i][curr_j];
        int ans = 1;
            for(int i = 0; i < 4; i++){
                int new_i = curr_i + p[i].first;
                int new_j = curr_j + p[i].second;
                if(new_i >= 0 and new_j >= 0 and new_i < m.size() and new_j < m[0].size()){
                    if(m[new_i][new_j] < m[curr_i][curr_j]){
                        ans = max(ans, 1 + bfs(new_i, new_j, m, dp));
                    }
                }
            }
        return dp[curr_i][curr_j] = ans;
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        // Code here
        int n = matrix.size();
        int m = matrix[0].size();
        int ans = 1;
        vector<vector<int>>dp(n, vector<int>(m, 0));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                ans = max(ans, bfs(i, j, matrix, dp));
            }
        }
        return ans;
        
    }
};
