class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        if(n == 0)return tasks.size();
        int ans = 0;
        priority_queue<int>pq;
        unordered_map<char, int>m;
        for(auto x: tasks)m[x]++;
        for(auto x: m)pq.push(x.second);
        while(!pq.empty())
        {
            vector<int>tmp;
            for(int i = 0; i <= n; i++)
            {
                if(!pq.empty())
                {
                    tmp.push_back(pq.top());
                    pq.pop();
                }
             }
            for(auto x: tmp)
            {
                    if(--x > 0)pq.push(x);
            }    
            
            ans += (pq.empty()? tmp.size(): n+1);
        }
        return ans;
                  
    }
};
