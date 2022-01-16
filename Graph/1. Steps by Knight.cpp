	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    // Code here
        int X[] = {1, 2, 1, 2, -1, -2, -1, -2};
	    int Y[] = {2, 1, -2, -1, 2, 1, -2, -1};
	    int dp[N+1][N+1];
	    memset(dp, -1, sizeof(dp));
	    queue<pair<int,int>>q;
	    q.push({KnightPos[0], KnightPos[1]});
	    dp[KnightPos[0]][KnightPos[1]] = 0;
	    while(!q.empty())
	    {
	        int i = q.front().first;
	        int j = q.front().second;
	        q.pop();
	        for(int k = 0; k < 8; k++)
	        {
	            int x = i + X[k];
	            int y = j + Y[k];
	            if(x < 1 || y < 1 || x > N || y > N || dp[x][y] != -1)continue;
	            dp[x][y] = dp[i][j] + 1;
	            q.push({x,y});
	        }
	    }
	    return dp[TargetPos[0]][TargetPos[1]];
	}
