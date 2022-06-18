#include<bits/stdc++.h>
using namespace std;
int t, n, m, ans;
int a[100][100], dp[100][100];
struct point{
	int x, y;
};
int xx[] = {-1, 0, 1, 0};
int yy[] = {0, 1, 0, -1};
bool valid(int x, int y){
	if(x >= 1 and y >= 1 and x <= n and y <= m and a[x][y] == 1)return true;
	return false;
}
void fun(int x, int y, int count){
	if(dp[x][y] > count){
		dp[x][y] = count;
		for(int i = 0; i < 4; i++){
			int new_x = xx[i] + x;
			int new_y = yy[i] + y;
			if(valid(new_x, new_y)){
				int tmp;
				if(new_y == y)tmp = 1;
				if(new_x == x)tmp = 0;
				fun(new_x, new_y, tmp + count);
			}
		}
	}
}
int main(){
    int t;
    cin>>t;
    for(int test_case = 1; test_case <= t; test_case++){
    	cin>>n>>m;
    	memset(a, 0, sizeof(a));
    	for(int i = 1; i <= n; i++){
    		for(int j = 1; j <= m; j++){
    			dp[i][j] = INT_MAX;
    			cin>>a[i][j];
    		}
    	}
    	point src, dst;
    	cin>>src.x>>src.y>>dst.x>>dst.y;
    	fun(src.x, src.y, 0);
    	cout<<'#'<<test_case<<" "<<dp[dst.x][dst.y]<<endl;
    }
    return 0;
}

