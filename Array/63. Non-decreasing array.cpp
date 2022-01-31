class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int ans = 0, j = INT_MIN;
        for(int i = 0; i < nums.size()-1; i++)
        {
            if(nums[i] <= nums[i+1])
            {
                j = nums[i];
            }
            else 
            {
              if(nums[i+1] < j)   //This is imp line
              {
                  nums[i+1] = nums[i];
              }
              ans++;
              if(ans > 1)return false;
            }
        }
        return true;
    }
};
