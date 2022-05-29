	vector<pair<int, int>>p = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
	# define pp pair<int, pair<int, int>>
    int minimumCostPath(vector<vector<int>>& grid) 
    {
        // Code here
        int n = grid.size();
        vector<vector<int>>dp(n, vector<int>(n, INT_MAX));
        priority_queue<pp, vector<pp>, greater<pp>>q;
        dp[0][0] = grid[0][0];
        q.push({dp[0][0], {0, 0}});
        while(!q.empty()){
            int curr_i = q.top().second.first;
            int curr_j = q.top().second.second;
            q.pop();
            if(curr_i == n-1 and curr_j == n-1){
                return dp[n-1][n-1];
            }
            for(int i = 0; i < 4; i++){
                int new_i = curr_i + p[i].first;
                int new_j = curr_j + p[i].second;
                if(new_i >=0 and new_j >= 0 and new_i < n and new_j < n and dp[new_i][new_j] > dp[curr_i][curr_j] + grid[new_i][new_j]){
                    dp[new_i][new_j] = grid[new_i][new_j] + dp[curr_i][curr_j];
                    q.push({dp[new_i][new_j], {new_i, new_j}});
                }
            }
        }
        return dp[n-1][n-1];
    }
