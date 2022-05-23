 int biGraph(int arr[], int n, int e) {
        // code here
        vector<int>adj[n];
        if(n == 1 || (n == 2 and e == 1))return 1;
        for(int i = 0; i < 2*e; i += 2){
            adj[arr[i]].push_back(arr[i+1]);
            adj[arr[i+1]].push_back(arr[i]);
        }
        for(auto x: adj){
            if(x.size() < 2)return 0;
        }
        return 1;
        
        
    }
