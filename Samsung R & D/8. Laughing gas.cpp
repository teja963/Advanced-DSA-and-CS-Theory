/* laughing bomb
INDEXING IS 1 BASED SO ARE THE INPUTS
 
INPUTS 
2
7 8
0 0 1 1 0 0 0
1 1 1 1 0 1 0
0 0 1 1 1 1 1
0 1 1 1 1 1 1
0 1 0 0 1 1 0
0 1 1 1 1 0 0
0 0 1 0 1 1 1
0 0 0 0 1 0 0
2 5
10 10
1 1 1 1 0 1 1 0 0 0
0 1 1 1 1 1 0 1 1 0
0 0 1 1 0 1 0 1 1 1
0 1 1 1 1 1 0 0 1 1
0 1 0 1 0 1 1 1 1 0
0 0 0 0 0 1 1 0 0 0
1 0 1 0 1 0 1 1 0 0
0 0 1 1 1 1 1 1 1 1
1 0 1 0 0 1 0 1 1 0
1 1 1 0 0 0 0 1 1 1
2 2
 
OUTPUTS
8 
21
 
*/
#include<bits/stdc++.h>
using namespace std;
int n, m, sr, sc, t, ans;
int a[100][100];
int visi[100][100];
int xx[] = {-1, 0, 1, 0};
int yy[] = {0, 1, 0, -1};
struct node{
	int x, y;
};
bool valid(node tmp){
	int x = tmp.x;   
	int y = tmp.y;
	if(x >= 1 and y >= 1 and x <= n and y <= m and visi[x][y] == 0)return true;
	return false;
}
void bfs(int x, int y){
	queue<node>q;
	node tmp;
	tmp.x = x;     tmp.y = y;
	q.push(tmp);
	visi[x][y] = 1;
	while(!q.empty()){
		int n = q.size();
		int flag = 0;
		while(n--){
			node curr = q.front();
			q.pop();
			for(int i = 0; i < 4; i++){
				node new_curr;
				new_curr.x = xx[i] + curr.x;
				new_curr.y = yy[i] + curr.y;
				if(valid(new_curr) and a[new_curr.x][new_curr.y] == 1){
					visi[new_curr.x][new_curr.y] = 1;
					q.push(new_curr);
					flag = 1;
				}
			}
		}
		if(flag)ans++;
	}
}
int main(){
		cin>>t;
		for(int test_case = 1; test_case <= t; test_case++){
			cin>>n>>m;
			for(int i = 1; i <= m; i++){
				for(int j = 1; j <= n; j++){
					cin>>a[i][j];
				}
			}
			cin>>sr>>sc;
			memset(visi, 0, sizeof(visi));
			ans = 1;
			bfs(sr, sc);
			cout<<'#'<<test_case<<" "<<ans<<endl;
		}
}

