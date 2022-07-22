class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
     if(k <= 1)return 0;
     int left = 0, right, ans = 0;
     long long prod = 1; 
     for(right = 0; right < nums.size(); right++)
      {
          prod *= nums[right];
          while(left <= right && prod >= k)prod /= nums[left++];
          ans += (right - left + 1);
      }
      return ans;
    }
};
