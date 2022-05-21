class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        multimap<int,int,greater<int>>m;
        if(nums.size()==0)return 0;
        for(auto x:nums)
        {
            if(m.find(x)==m.end())m.insert({x,1});
        }
        int c=1,ans=0,tmp=-1;
        for(auto x:m)
        {
            if(x.first==tmp-1)c++;
            else
            {
                ans=max(ans,c);
                 c=1;
            }
            tmp=x.first;
        }
        return max(ans,c);
    }
};
