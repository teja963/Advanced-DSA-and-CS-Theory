class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int l,r,n=nums.size(),i;
        l=nums[0];
        r=nums[n-1];
        vector<int>ans(n,1);
        for(i=1;i<n;i++){ans[i]=l; l*=nums[i];}
        for(i=n-2;i>=0;i--){ans[i]*=r; r*=nums[i];}
        return ans;
        
        
    }
