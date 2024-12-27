class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        /*first need to arrange the format of formula*/
        int n = values.size();
        vector<int>sfx(n);
        /*getting the right part with max value in linear time we need smax_suffix array*/
        sfx[n-1] = values[n-1] - (n-1);
        for(int i = n-2; i >= 0; i--){
            sfx[i] = max(values[i]-i, sfx[i+1]);
        }
        int ans = INT_MIN;
        /*Check the values*/
        for(int i = 0; i < n-1; i++){
            ans = max(ans, values[i]+i+sfx[i+1]);
        }
        return ans;
    }
};