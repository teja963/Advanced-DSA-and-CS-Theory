class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        pair<vector<int>::iterator,vector<int>::iterator>x;
        x=equal_range(nums.begin(),nums.end(),target);
        if(x.first==nums.end()||*x.first!=target)return {-1,-1}; // if x is not present or not found
        return {int(x.first-nums.begin()),int(x.second-nums.begin()-1)};
    }
