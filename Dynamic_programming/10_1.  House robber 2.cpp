class Solution {
    int path(vector<int>nums){
        int n=nums.size(); 
        int dp[n+1];
        dp[0]=0;
        dp[1]=nums[0];
        for(int i = 2; i <= n; i++)dp[i] = max(dp[i-2] + nums[i-1], dp[i-1]);   //nums[i-1] here 
        return dp[n];
    }
public:
    int rob(vector<int>& nums) {
         int i,j,k,n=nums.size();
        if(n == 0)return 0;
        if(n == 1)return nums[0];
        if(n == 2)return max(nums[0],nums[1]);
        int a = path(vector<int>(nums.begin(),nums.end()-1));  //exclude last element when we choose 1st
        int b = path(vector<int>(nums.begin()+1,nums.end())); //exclude 1st element when we choose last
        return max(a,b);   
    }
