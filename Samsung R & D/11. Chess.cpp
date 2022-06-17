#include<bits/stdc++.h>
using namespace std;
int t, n, m, ans;
int a[100][100];
int xx[] = {-1, -2, -2, -1, 1, 2, 2, 1};
int yy[] = {-2, -1, 1, 2, 2, 1, -1, -2};
struct point{
	int x, y, level;
};
bool valid(point tmp){
	int x = tmp.x;    int y = tmp.y;
	if(x >= 1 and y >= 1 and x <= m and y <= n)return true;
	return false;
}
void fun(point src, point dst){
	queue<point>q;
	src.level = 0;
	q.push(src);
	a[src.x][src.y] = 1;
	while(!q.empty()){
		point curr = q.front();
		q.pop();
		if(curr.x == dst.x and curr.y == dst.y)ans = min(ans, curr.level);
		for(int i = 0; i < 8; i++){
			point tmp;
			tmp.x = xx[i] + curr.x;
			tmp.y = yy[i] + curr.y;
			tmp.level = curr.level + 1;
			if(valid(tmp) and !a[tmp.x][tmp.y]){
				a[tmp.x][tmp.y] = 1;
				q.push(tmp);
			}
		}
	}
}
int main(){
    int t;
    cin>>t;
    for(int test_case = 1; test_case <= t; test_case++){
    	cin>>n>>m;
    	point src, dst;
    	cin>>src.x>>src.y>>dst.x>>dst.y;
    	memset(a, 0, sizeof(a));
    	ans = 100000;
    	fun(src, dst);
    	if(ans == 100000)ans = -1; 
    	cout<<'#'<<test_case<<" "<<ans<<endl;
    }
    return 0;
}
