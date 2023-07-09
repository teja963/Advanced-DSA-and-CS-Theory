class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int high = 0, low = INT_MIN, ans;
        for(int i = 0; i < nums.size(); i++){
            low = max(low, nums[i]);
            high += nums[i];
        }
        while(low <= high){
            int mid = (low+high)/2;
            int count = 1, tmp_sum = 0;
            for(int i = 0; i < nums.size(); i++){
                tmp_sum += nums[i];
                if(tmp_sum > mid){
                    count++;
                    tmp_sum = nums[i];
                }
            }
            if(count <= k){high = mid-1, ans = mid;}
            else low = mid+1;
        }
        return ans;
    }
};
