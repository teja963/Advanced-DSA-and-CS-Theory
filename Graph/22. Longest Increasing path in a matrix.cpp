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
