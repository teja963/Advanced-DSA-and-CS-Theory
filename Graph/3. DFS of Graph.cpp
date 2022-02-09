 // Function to return a list containing the DFS traversal of the graph.
    vector<int>ans;
    void DFS(int V, bool visited[], vector<int> adj[])
    {
        visited[V] = true;
        ans.push_back(V);
        
        for(auto x: adj[V])
        {
            if(!visited[x])
            {
                DFS(x, visited, adj);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        bool *visited = new bool[V];
        for(int i = 0; i < V; i++)visited[i] = false;
        DFS(0, visited, adj);
        return ans;
    }
};
