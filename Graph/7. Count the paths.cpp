class Solution {
public:
    int count = 0;
    void dfs(int s, vector<int>&visited, vector<int>adj[], int d){
        if(s == d){
            count++;
            return;
        }
        visited[s] = 1;
        for(auto x: adj[s]){
            if(!visited[x]){
                dfs(x, visited, adj, d);
            }
        }
        visited[s] = 0;
    }
	int possible_paths(vector<vector<int>>edges, int n, int s, int d){
	    // Code here
	    vector<int>adj[n];
	    for(int i = 0; i < edges.size(); i++){
	        adj[edges[i][0]].push_back(edges[i][1]);
	    }
	    vector<int>visited(n, 0);
	    dfs(s, visited, adj, d);
	    return count;
	}
};
