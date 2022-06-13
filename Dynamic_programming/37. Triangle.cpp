class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<int>v(n);
        for(int i = 0; i < triangle[n-1].size(); i++){
            v[i] = triangle[n-1][i];
        }
        for(int i = n-2; i >= 0; i--){
            for(int j = 0; j < triangle[i].size(); j++){
                v[j] = triangle[i][j] + min(v[j], v[j+1]);
            }
        }
        return v[0];
    }
};
