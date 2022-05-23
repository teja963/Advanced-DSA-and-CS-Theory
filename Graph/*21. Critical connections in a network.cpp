  vector<vector<int>>ans;
    vector<vector<int>>graph;
    vector<int>frst_time, min_time, visited;
    int time = 1;
    void dfs(int node, int parent = -1){
        frst_time[node] = min_time[node] = time++;
        visited[node] = 1;
        for(auto child: graph[node]){
            if(child == parent)continue;
            if(!visited[child]){
                dfs(child, node);
            }
            min_time[node] = min(min_time[node], min_time[child]);
            if(frst_time[node] < min_time[child]){
                ans.push_back({node, child});
            }
        }
    }
