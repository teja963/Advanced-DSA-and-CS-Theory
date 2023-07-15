class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        long long int sum = 0, i = 0, count = 0;
        while(sum < n){
            if(i < nums.size() && nums[i] <= sum+1){
                sum += nums[i++];
            }
            else{
                count++;
                sum += sum + 1;
            }
        }
        return count;
    }
};
