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
