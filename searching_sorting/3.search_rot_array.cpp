class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i,c=0,j;
        for(i=0;i<nums.size();i++)if(nums[i]==target){c++;j=i;}
        if(c==0)return -1;
        else return j;
        
    }
