class Solution {
public:
    vector<vector<int>>v1;
    vector<int>v2;
    void subsets(vector<int>&nums,int l,int h)
    {
        if(l==h){
            v1.push_back(v2);
            return ;
        }
        else{
            subsets(nums,l+1,h);
            v2.push_back(nums[l]);
            subsets(nums,l+1,h);
            v2.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        subsets(nums,0,nums.size());
        return v1;
    }
