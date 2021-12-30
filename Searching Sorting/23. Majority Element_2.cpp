class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        nums.push_back(0);
        int count = 0, n = nums.size();
        int i = 0;
        for(int j =1; j < n ; j++)
        {
            if(nums[i] != nums[j]){
                if(count >= (n-1)/3)ans.push_back(nums[i]);
                count = 0;
                i = j;
            }
            else count++;
        }
        if(count > 0)ans.push_back(nums[i]);
        return ans;
    }
};
