   bool check(int src, vector<int>&visited, vector<int>&dfsvisited, vector<int>adj[]){
        visited[src] = 1;
        dfsvisited[src] = 1;
        for(auto x: adj[src]){
            if(!visited[x]){
                if(check(x, visited, dfsvisited, adj))return true;
            }
            else if(dfsvisited[x])return true;
        }
        dfsvisited[src] = 0;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<int>visited(V, 0);
        vector<int>dfsvisited(V, 0);
        for(int i = 0; i < V; i++){
            if(!visited[i]){
                if(check(i, visited, dfsvisited, adj))return true;            
            }
        }
        return false;
    }
};
