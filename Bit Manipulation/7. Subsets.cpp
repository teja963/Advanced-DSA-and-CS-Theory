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
    
    
//Subsets 2 (if it contain duplicates)
class Solution {
public:
      vector<vector<int>>ans;
        vector<int>v;
    void generate(vector<int>&nums,int l,int h)
    {
        if(l>h)
        {
            if(find(ans.begin(),ans.end(),v)==ans.end())//searching syntax
                ans.push_back(v);
            return ;
        }
        else
        {
          generate(nums,l+1,h);
          v.push_back(nums[l]);
          generate(nums,l+1,h);
          v.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        generate(nums,0,nums.size()-1);
        return ans;
    }
};
