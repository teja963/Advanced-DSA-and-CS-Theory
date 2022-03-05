class Solution{
    public:
    vector<vector<int>> computeBeforeMatrix(int N, int M, vector<vector<int>> after){
        // Code here
        for(int i = N-1; i >= 1; i--){
            for(int j = M-1; j >= 1; j--){
                after[i][j] -= (after[i-1][j] + after[i][j-1] - after[i-1][j-1]);
            }
        }
        for(int i = N-1; i >= 1; i--)after[i][0] -= after[i-1][0];
        for(int i = M-1; i >= 1; i--)after[0][i] -= after[0][i-1];
        return after;
        
    }
};
