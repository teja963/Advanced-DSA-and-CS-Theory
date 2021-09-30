class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size(),i,j,t=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i<n/2)swap(matrix[i][j],matrix[n-i-1][j]);
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++){
                if(i==j)t=1;
                if(t==1)swap(matrix[i][j],matrix[j][i]);
            }
            t=0;
        }
    }
