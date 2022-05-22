class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        int m = target;
        int n = nums.size();
        vector<unsigned int>dp(m+1,0);
        dp[0] = 1;
        for(int i = 1; i <= m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(i >= nums[j])
                {
                    dp[i] += dp[i-nums[j]];
                }
            }
        }
        return dp[m];
    }
};
