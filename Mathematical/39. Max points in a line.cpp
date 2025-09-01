class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n = points.size();
        int ans = 1;
        for(int i = 0; i < n; i++){
            unordered_map<double, int>m;
            for(int j = 0; j < n; j++){
                if(i != j){
                    double inv_slpe = (double)(points[j][0]-points[i][0])/(points[j][1]-points[i][1]);
                    double slpe = atan(inv_slpe);
                    m[slpe]++;
                    ans = max(ans, m[slpe]+1);
                }
            }
        }
        return ans;
    }
};
