	bool isPossible(int N, vector<pair<int, int> >& prerequisites) {
	    // Code here
	    vector<int>adj[N];
	    vector<int>indeg(N, 0);
	    for(auto x: prerequisites){
	        adj[x.second].push_back(x.first);
	        indeg[x.first]++;
	    }
	    queue<int>q;
	    int size = 0;
	    for(int i = 0; i < N; i++){
	        if(indeg[i] == 0){
	            q.push(i);
	            size++;
	        }
	    }
	    if(size == 0)return 0;
	    while(!q.empty()){
	        int curr = q.front();
	        q.pop();
	        for(auto x: adj[curr]){
	            indeg[x]--;
	            if(indeg[x] == 0){
	                q.push(x);
	                size++;
	            }
	        }
	    }
	   return size == N? 1: 0; 
	}
};
