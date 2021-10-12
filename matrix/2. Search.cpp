class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i,j,n,m,c=0;
        m=matrix[0].size();
        vector<int>v(m);
        n=matrix.size();
        for(i=0;i<n;i++){
            m=matrix[i].size();
            if(target>=matrix[i][0]){
                for(j=0;j<m;j++)if(target==matrix[i][j])c++;
                
            }
        }
        if(c>0)return true;
        else return false;
            
        
        
        
    }
