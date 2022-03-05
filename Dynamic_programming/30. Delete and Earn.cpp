class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        vector<int>dp(10002, 0);
        vector<int>freq(10002, 0);
        for(int i = 0; i < nums.size(); i++){
            freq[nums[i]]++;
        }
        dp[0] = freq[0];
        dp[1] = freq[1];
        for(int i = 2; i < 10002; i++){
            dp[i] = max(dp[i-1], dp[i-2] + i * freq[i]);
        }
        return dp[10001];
    }
};
