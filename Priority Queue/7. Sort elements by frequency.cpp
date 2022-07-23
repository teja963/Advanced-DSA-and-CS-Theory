class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>m;
        multimap<int,char,greater<int>>mp;
        string ans;
        for(auto x:s)m[x]++;
        for(auto x:m)mp.insert({x.second,x.first});
        for(auto x:mp)
        {
            int y = x.first;
            while(y--)ans += x.second;
        }
        return ans;
        
    }
};

//Priority_queue
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>m;
        priority_queue<pair<int,char>>pq;
        string ans;
        for(auto x:s)m[x]++;
        for(auto x:m)pq.push({x.second,x.first});
        while(pq.size())
        {
            int x=pq.top().first;
            while(x--)ans+=pq.top().second;
            pq.pop();
        }
        return ans;
        
    }
};
