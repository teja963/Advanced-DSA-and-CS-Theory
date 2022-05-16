    #define pp pair<int,int>
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        priority_queue<pp,vector<pp>,greater<pp>>pq; //we need to remove max weight so min heap
        pq.push({0, 0});
        int ans = 0;
        vector<int>visited(V, 0);
        while(!pq.empty()){
            auto x = pq.top();
            pq.pop();
            int curr = x.second;
            int weight = x.first;
            if(visited[curr])continue;
            ans += weight;
            visited[curr] = 1;
            for(auto x: adj[curr])pq.push({x[1], x[0]});
        }
        return ans;
    }
};
