	int isNegativeWeightCycle(int n, vector<vector<int>>edges){
	    // Code here
	    vector<int>dist(n, 1000000);
	    dist[0] = 0;
	    for(int i = 1; i < n; i++){
	        for(auto x: edges){
	            if(dist[x[1]] > dist[x[0]] + x[2]){
	                dist[x[1]] = dist[x[0]] + x[2];
	            }
	        }
	    }
	    for(auto x: edges){
	       if(dist[x[1]] > dist[x[0]] + x[2])return 1;
	     }
	    return 0;
	}
};
