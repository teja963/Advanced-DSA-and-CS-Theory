class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int i,j=0,k=0,n=nums.size();
        unordered_map<int,int>m;
        for(i=0;i<n;i++){
            if(nums[i]==0)nums[i]=-1;
            k+=nums[i];
            if(k==0)j=i+1;
            if(m.find(k)!=m.end())j=max(j,i-m[k]);
            else m[k]=i;
        }
        return j;
    }
