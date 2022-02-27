class Solution {
  public:
    int smallestSubstring(string S) {
        // Code here
        vector<int>v(3, -1);
        int ans = INT_MAX;
        for(int i = 0; i < S.size(); i++){
            v[S[i] - '0'] = i;
            if(v[0] != -1 and v[1] != -1 and v[2] != -1){
                int last_element = max({v[0], v[1], v[2]});
                int first_element = min({v[0], v[1], v[2]});
                ans = min(ans, last_element - first_element + 1);
            }
        }
        return ans == INT_MAX ? -1: ans;
    }
};
