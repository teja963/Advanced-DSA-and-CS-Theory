	public:
	//Function to return list containing vertices in Topological order. 
	stack<int>s;
	void dfs(vector<int>adj[], vector<int>&visited, int src){
	    visited[src] = 1;
	    for(auto x: adj[src]){
	        if(!visited[x]){
	            dfs(adj, visited, x);
	        }
	    }
	    s.push(src);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<int>visited(V, 0);
	    vector<int>ans;
	    for(int i = 0; i < V; i++){
	        if(!visited[i]){
	            dfs(adj, visited, i);
	        }
	    }
	    while(!s.empty()){
	        ans.push_back(s.top());
	        s.pop();
	    }
	    return ans;
	}
};
