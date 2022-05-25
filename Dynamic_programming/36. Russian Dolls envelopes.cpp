class Solution {
public:
    static bool cmp(vector<int>&a, vector<int>&b){
        if(a[0] == b[0])return a[1] > b[1];
        return a[0] < b[0];
    }
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        sort(envelopes.begin(), envelopes.end(), cmp);
        vector<int>dp;
        for(int i = 0; i < envelopes.size(); i++){
            int height = envelopes[i][1];
            int index = lower_bound(dp.begin(), dp.end() ,height) - dp.begin();
            if(index == dp.size())dp.push_back(height);
            dp[index] = height;
        }
        return dp.size();
    }
};
