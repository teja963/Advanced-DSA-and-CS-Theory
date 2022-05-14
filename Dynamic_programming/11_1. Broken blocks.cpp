int MaxGold(vector<vector<int>>&matrix){
    // Code here
    int m = matrix.size();
    int n = matrix[0].size();
    for(int i = m-2; i >= 0; i--){
        for(int j = 0; j < n; j++){
            int down = matrix[i+1][j];
            int right_diag = (j == n-1)? 0: matrix[i+1][j+1]; 
            int left_diag = (j == 0)? 0: matrix[i+1][j-1];
            if(matrix[i][j] != -1)matrix[i][j] = matrix[i][j] + max({down, left_diag, right_diag, 0}); //this case of adding -1 for all 3 possibilities
        }
    }
    return max(0, *max_element(matrix[0].begin(), matrix[0].end()));
}
};
