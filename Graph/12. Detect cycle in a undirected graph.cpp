   bool check(int src, int parent, vector<int>&visited, vector<int>adj[]){
        visited[src] = 1;
        for(auto x: adj[src]){
            if(!visited[x]){
                if(check(x, src, visited, adj))return true;
            }
            else if(x != parent)return true; //this line
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<int>visited(V, 0);
        for(int i = 0; i < V; i++){
            if(!visited[i]){
                if(check(i, -1, visited, adj))return true;
            }
        }
        return false;
        
    }
};

