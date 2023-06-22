class Solution {
public:
    void sortColors(vector<int>& nums) {
        if(nums.size() == 0 || nums.size() == 1)return;
        int l = 0,m = 0,h = nums.size()-1;
        while(m <= h){
            if(nums[m] == 0)swap(nums[l++], nums[m++]);
            else if(nums[m] == 1)m++;
            else {
                swap(nums[m], nums[h--]);
            }
        }
    }
};
