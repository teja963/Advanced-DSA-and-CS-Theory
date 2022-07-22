////vvv.imp concept usage

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int i = 0,j,m,l = 0;
        vector<int>v;
        deque<int>q;
        for(i = 0; i < k; i++){
            while(!q.empty() && q.back() < nums[i])q.pop_back();
            q.push_back(nums[i]);
        }
        v.push_back(q.front());
        for(i = 1; i <= nums.size()-k; i++){
            if(q.front() == nums[i-1])q.pop_front();
            while(!q.empty() && q.back() < nums[i+k-1])q.pop_back();
            q.push_back(nums[i+k-1]);
            v.push_back(q.front());
        }
        return v;
}
     
