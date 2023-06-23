class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size()-1,i = 0;
        while(i < m &&n >= 0)
        {
            int element = matrix[i][n];
            if(element == target)return true;
            else if(element < target)i++;
            else n--;
        }
        return false;
    }
};
