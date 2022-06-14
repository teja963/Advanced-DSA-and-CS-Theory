#include<bits/stdc++.h>
using namespace std;
int t, n, c;
int rare[5][2];
int arr[100][100];
int visi[100][100];
struct node{
	int x, y, level;
};
int x[] = {-1, 0, 1, 0};
int y[] = {0, 1, 0, -1};
bool valid(node tmp){
	if(tmp.x >= 0 and tmp.y >= 0 and tmp.x < n and tmp.y < n)return true;
	return false;
}
int bfs(int sx, int sy, int dx, int dy){
	queue<node>q;
	node tmp;
	tmp.x = sx;     tmp.y = sy;     tmp.level = 0;
	q.push(tmp);
	visi[tmp.x][tmp.y] = 1;
	while(!q.empty()){
		tmp = q.front();
		if(tmp.x == dx and tmp.y == dy)break;
		q.pop();
		for(int i = 0; i < 4; i++){
			node new_tmp;
			new_tmp.x = x[i] + tmp.x;
			new_tmp.y = y[i] + tmp.y;
			new_tmp.level = tmp.level + 1;
			if(valid(new_tmp) and visi[new_tmp.x][new_tmp.y] == 0){
				q.push(new_tmp);
				visi[new_tmp.x][new_tmp.y] = 1;
			}
		}
	}
	return tmp.level;
}
int main(){
	cin>>t;
	for(int test_case = 1; test_case <= t; test_case++){
		cin>>n>>c;
		for(int i = 0; i < c; i++){
			int x, y;
			cin>>x>>y;
			rare[i][0] = x-1;
			rare[i][1] = y-1;
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin>>arr[i][j];
			}
		}
		int ans = 1000000;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				int tmp;
				if(arr[i][j] == 1){
					//check all possibilities
					tmp = 0;
					for(int k = 0; k < c; k++){
						memset(visi, 0, sizeof(visi));
						int res = bfs(i, j, rare[k][0], rare[k][1]);
						tmp = max(tmp, res);	
					}
					
				}
				ans = min(ans, tmp);
			}
		}
		cout<<'#'<<test_case<<" "<<ans<<endl;
	}
}
