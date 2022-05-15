    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        queue<int>q;
        vector<vector<int>>tmp(V);
        vector<int>dist(V, INT_MAX);
        dist[S] = 0;
        q.push(S);
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            for(auto x: adj[curr]){
                int neighbour = x[0];
                int len = x[1];
                if(dist[neighbour] > dist[curr] + len){
                    dist[neighbour] = dist[curr] + len;
                    q.push(neighbour);
                }
            }
        }
        return dist;
    }
};
