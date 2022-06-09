class Solution {
public:
    string fun(vector<int>&v){
        string ans;
        for(int i = 0; i < v.size(); i++){
            ans += (v[i] + '0');
        }
        return ans;
    }
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        unordered_map<string, int>m;
        int ans = 0;
        for(int i = 0; i < matrix.size(); i++){
            string tmp = fun(matrix[i]);
            m[tmp]++;
            for(int j = 0; j < matrix[i].size(); j++){
                matrix[i][j] = matrix[i][j] == 0? 1: 0;
            }
            tmp = fun(matrix[i]);
            m[tmp]++;
        }
        for(auto x: m){
            ans = max(ans, x.second);
        }
        return ans;
    }
};
