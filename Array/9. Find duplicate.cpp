class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        vector<bool> a(n + 1);
        int ans;
        for(int i = 0; i < n ; i++){
            if(!a[nums[i]])
                a[nums[i]] = true;
            else{
                ans = nums[i];
                break;
            }
        }
        return ans;
        }};

