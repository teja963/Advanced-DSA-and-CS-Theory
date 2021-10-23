class Solution {
public:
      typedef pair<int,int> p;   
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        vector<int>v;
        priority_queue<p,vector<p>,greater<p>>pq;
        for(auto x:nums)m[x]++;
        for(auto x:m)
        {
            p temp;
            temp.first=x.second;
            temp.second=x.first;
            pq.push(temp);
            while(pq.size()>k)pq.pop();
        }
        while(pq.size())
        {
            v.push_back(pq.top().second);
            pq.pop();
        }
        return v;
    }
};
