class Solution 
{
    public:
    //Function to find a Mother Vertex in the Graph.
    void dfs(int i, vector<int>adj[], int &count, vector<int>&visited){
        visited[i] = 1;
        count++;
        for(auto x: adj[i]){
            if(!visited[x]){
                dfs(x, adj, count, visited);
            }
        }
    }
	int findMotherVertex(int V, vector<int>adj[])
	{
	    // Code here
	    for(int i = 0; i < V; i++){
	        int count = 0;
	        vector<int>visited(V,0);
	        dfs(i, adj, count, visited);
	        if(count == V)return i;
	    }
	    return -1;
	}

};
