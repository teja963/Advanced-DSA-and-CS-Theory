class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int i,j=0,c=0;
     for(i = 0; i < nums.size()-1; i++)
     {
         if(c < 2)nums[j++] = nums[i];
         if(nums[i] == nums[i+1])c++;
         else c = 0;
      }
        if(c < 2)nums[j++] = nums[nums.size()-1];
        return j;
        
    }
