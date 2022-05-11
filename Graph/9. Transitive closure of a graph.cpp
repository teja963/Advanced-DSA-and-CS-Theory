
class Solution{
public:
    void travel(int src, vector<int>adj[], vector<int>&visited){
        visited[src] = 1;
        for(auto x: adj[src]){
            if(!visited[x]){
                travel(x, adj, visited);
            }
        }
    }
    vector<vector<int>> transitiveClosure(int N, vector<vector<int>> graph)
    {
        // code here
        vector<int>adj[N];
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                if(graph[i][j] == 1)adj[i].push_back(j);
            }
        }
        for(int i = 0; i < N; i++){
            vector<int>visited(N, 0);
            travel(i, adj, visited);
            for(int j = 0; j < N; j++){
                if(visited[j])graph[i][j] = 1;
            }
        }
        return graph;
    }
};
