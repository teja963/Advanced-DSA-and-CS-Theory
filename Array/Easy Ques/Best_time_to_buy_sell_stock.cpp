class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int i,p = pow(2,20), m = 0, n;
         n = prices.size();
         for(i = 0; i < n; i++){
             if(prices[i] < p)p = prices[i];
             else if(prices[i] - p > m)m = prices[i]-p;
         }
         return m;
    }
    

//Max difference between increasing element    
class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int ans = -1, m = INT_MAX;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] < m)m = nums[i];
            else if(nums[i] - m > ans)ans = nums[i] - m;  //for equal elements in decrasing order we get 0, for that case
        }
        return ans == 0? -1: ans;
        
    }
};
