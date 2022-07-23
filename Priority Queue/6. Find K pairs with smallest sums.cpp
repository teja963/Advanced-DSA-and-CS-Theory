class Solution {
public:
    
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>>ans;
        priority_queue<pair<int,pair<int,int>>>pq;
        for(auto x: nums1)
        {
            for(auto y: nums2){
                int s = x+y;
                if(pq.size() < k)pq.push({s,{x,y}});
                else if(s < pq.top().first)
                {
                    pq.pop();
                    pq.push({s,{x,y}});
                }
                else break;
            }
        }
        while(pq.size())
        {
            ans.push_back({pq.top().second.first,pq.top().second.second});
            pq.pop();
        }
        return ans;
    }
};
