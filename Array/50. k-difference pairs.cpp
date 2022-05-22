class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
      unordered_map<int,int> m;
        
        for(auto x:nums)m[x]++;
        int ans=0;
        for(auto x:m)
        {
            if(k==0 && x.second > 1)ans++;
            else if(k > 0 && m.count(x.first+k))ans++;
        }
        return ans;
    
    }
