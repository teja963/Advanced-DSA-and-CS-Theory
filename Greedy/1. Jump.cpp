class Solution {
public:
    bool canJump(vector<int>& nums) {
         int reach=0,i;
        for(i=0;i<nums.size();i++){
            if(i>reach)return false;
            else reach=max(reach,i+nums[i]);
        }
        return reach>=nums.size()-1?:true;false;
    }
