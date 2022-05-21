class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int>m;
        for(auto x: nums)m[x] = 1;
        int ans = 0;
        for(auto x: m){
            if(m.find(x.first - 1) != m.end())continue; //for skipping back iteration and starting from fresh element
            int count = 1;
            while(m.find(x.first + count) != m.end())count++;
            ans = max(ans, count);
        }
        return ans;
    }
};
