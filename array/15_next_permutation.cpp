class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i,j,k,n;
        char c[1000];
        n=nums.size();
        k=nums[n-1];
        for(i=n-2;i>=0;i--){
            if(nums[i]>=k)k=nums[i];
            else break;
        }
        j=i;
        if(j>=0){
        for(i=n-1;i>j;i--)if(nums[j]<nums[i]){swap(nums[i],nums[j]);break;}}
        reverse(nums.begin()+j+1,nums.end());
        cout<<'[';
        for(i=0,j=0;i<n;i++){c[j++]=nums[i]+'30';c[j++]=',';}
        for(i=0;i<=j-2;i++)cout<<c[i];
        cout<<']';
        
    }
