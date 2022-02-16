  int fun(vector<vector<int>>matrix, int i, int j)
    {
            int m = matrix[0].size();
            int count = 0;
            for(int k = 0; k < m; k++)
            {
                if(matrix[i][k] and matrix[j][k])count++;
            }
            return count >= 2;
    }
    bool ValidCorner(const vector<vector<int> >& matrix)
    {
        // Your code goes here
        int n = matrix.size(), m = matrix[0].size();
        for(int i = 0; i < n; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                if(fun(matrix,i,j))return true;
            }
        }
        return false;
