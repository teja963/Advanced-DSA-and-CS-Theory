#include<bits/stdc++.h>
using namespace std;

void bfs(vector<vector<int>>& a, vector<vector<int>>& ans)
{
	int m = a.size();
	int n = a[0].size();
	
	for(int i = 0; i < m; i++)
	{
		queue<int> Queue;
		for(int j = 0; j < n; j++)
		{
			if(a[i][j] == 1)
			{
				ans[i][j] = 0;
				Queue.push(j);
			}		 
		}

		while(Queue.size())
		{
			int cur = Queue.front();
			Queue.pop();
			

			
			if(ans[i][(cur + 1) % n] == INT_MAX)
			{
				ans[i][(cur + 1) % n] = ans[i][cur] + 1;
				Queue.push((cur + 1) % n);
			}
				
			
			if(cur - 1 < 0 && ans[i][n - 1] == INT_MAX)
			{
				ans[i][n - 1] = ans[i][cur] + 1;
				Queue.push(n - 1);
			}
			else if(ans[i][(cur - 1) % n] == INT_MAX)
			{
				ans[i][(cur - 1) % n] = ans[i][cur] + 1;
				Queue.push((cur - 1) % n);
			}		
		}
		
	}

}


int main()
{
	vector<vector<int>> a = {
					{0, 1, 0, 0, 1},
					{0, 0, 0, 1, 0},
					{0, 1, 0, 0, 0},
					{0, 0, 0, 0, 1},
					{0, 0, 1, 0, 0},
					{1, 0, 0, 0, 0}
				  };
				  
	vector<vector<int>> dp(6, vector<int>(5, INT_MAX));
	
	bfs(a, dp);

	int m = a.size();
	int n = a[0].size();
	
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
	

	int ans = INT_MAX;
	
	for(int j = 0; j < n; j++)
	{
		int t = 0;
		for(int i = 0; i < m; i++)
		{
			t += dp[i][j];
		}	
		ans = min(ans, t);
	}
	cout<<ans;	

}
