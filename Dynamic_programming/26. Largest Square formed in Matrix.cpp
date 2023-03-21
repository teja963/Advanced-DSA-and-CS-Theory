 int maxSquare(int n, int m, vector<vector<int>> mat){
        // code here
        if(n == 1)
        {
            for(int i = 0; i < m; i++)
            {
                if(mat[0][i] == 1)return 1;
            }
            return 0;
        }
        if(m == 1)
        {
            for(int i = 0; i < n; i++)
            {
                if(mat[i][0] == 1)return 1;
            }
            return 0;
        }
        int ans = 0;
        for(int i = 1; i < n; i++)
        {
            for(int j = 1; j < m; j++)
            {
                if(mat[i][j] == 1)
                {
                    mat[i][j] = min(mat[i-1][j], min(mat[i][j-1], mat[i-1][j-1])) + 1;
                }
                
                ans = max(ans, mat[i][j]);
            }
        }
        return ans;
    }
    
/*Approach 2*/
class Solution {
public:
    int dp[301][301];
    static bool comp(int a, int b){
        return a < b;
    }
    int fun(int i, int j, vector<vector<char>>& matrix)
    {
        if(i < 0 || j < 0 || i >= matrix.size() || j >= matrix[0].size() || matrix[i][j] == '0')return 0;
        if(dp[i][j] != -1)return dp[i][j]; //memorization method
        return dp[i][j] = 1 + min({fun(i+1, j, matrix), fun(i, j+1, matrix), fun(i+1, j+1, matrix)}, comp);
    }
    int maximalSquare(vector<vector<char>>& matrix) {
        int ans = INT_MIN;
        memset(dp, -1, sizeof(dp));
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[0].size(); j++){
                if(matrix[i][j] == '1')
                    ans = max(ans, fun(i, j, matrix));
            }
        }
        return ans == INT_MIN? 0: ans*ans;
    }
};
