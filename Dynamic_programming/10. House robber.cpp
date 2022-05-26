class Solution {
public:
    int rob(vector<int>& nums) {
        int i,j,k,n = nums.size();
        if(n == 0)return 0;
        if(n == 1)return nums[0];
        if(n == 2)return max(nums[0], nums[1]);
        int dp[n];
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        for(i = 2; i < n; i++)dp[i] = max(dp[i-2] + nums[i], dp[i-1]);
        return dp[n-1];
    }
