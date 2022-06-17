/*
There is a mobile piece and a stationary piece on the N×M chessboard. 
The available moves of the mobile piece are the same as set out in the image below. 
You need to capture the stationary piece by moving the mobile piece with the minimum amount of moves.
Write a program to find out the minimum number moves to catch a piece. 
[Input]
Several test cases can be included in the inputs. T, the number of cases is given in the first row of the
inputs. After that, the test cases as many as T (T ≤ 20) are given in a row. 
N, the numbers of the rows and M, the number of columns of the chessboard are given in the first row of
each test case. 
R & C is the location information of the attacking piece and S & K is the location of the defending pieces 
and are given in the row at the second line. However, the location of the uppermost end of the left end 
is (1, 1)
[Output]
For each test case, you should print "Case #T" in the first line where T means the case number.
For each test case, you should output the minimum number of movements to catch a defending piece at the 
first line of each test case. If not moveable, output equals ‘-1’. 
[I/O Example]
Input 
2
9 9
3 5 2 8
20 20
2 3 7 9
Output
Case #1
2
Case #2
5 
*/
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
