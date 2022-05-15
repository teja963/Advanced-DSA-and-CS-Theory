   /*
   0 - not colored
   1 - blue
   -1 - red
   */
    bool validcolor(vector<int>adj[], int src, int c, vector<int>&color){
        if(color[src] != 0){
            return color[src] == c;
        }
        color[src] = c;
        for(auto x: adj[src]){
            if(!validcolor(adj, x, -c, color))return false;
        }
        return true;
    }
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    vector<int>color(V, 0);
	    for(int i = 0; i < V; i++){
	        if(color[i] == 0 && !validcolor(adj, i, 1, color))return false;
	    }
	    return true;
	}

};
