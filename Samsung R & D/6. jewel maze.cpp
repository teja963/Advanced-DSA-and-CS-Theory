/*
There is a maze that has one entrance and one exit. Jewels are placed in passages of the maze. You want to pick up the jewels after getting into the maze through the entrance and before getting out of it through the exit. You want to get as many jewels as possible, but you don’t want to take the same passage you used once.

When locations of a maze and jewels are given, find out the greatest number of jewels you can get without taking the same passage twice, and the path taken in this case.

Input
There can be more than one test case in the input file. The first line has T, the number of test cases. Then the totally T test cases are provided in the following lines (T ≤ 10 ).

In each test case, In the first line, the size of the maze N (1 ≤ N ≤ 10) is given. The maze is N×N square-shaped. From the second line through N lines, information of the maze is given. “0” means a passage, “1” means a wall, and “2” means a location of a jewel. The entrance is located on the upper-most left passage and the exit is located on the lower-most right passage. There is no case where the path from the entrance to the exit doesn’t exist.

Output
From the first line through N lines, mark the path with 3 and output it. In N+1 line, output the greatest number of jewels that can be picked up. Each test case must be output separately as a empty.

MAX DIAMONDS COLLECTED AND ITS PATH IS THE OUTPUT.

*/

#include<bits/stdc++.h>
using namespace std;
int t, n, m, diamonds;
int a[100][100], ans[100][100];
int xx[] = {-1, 0, 1, 0};
int yy[] = {0, 1, 0, -1};
bool valid(int x, int y){
	if(x < 0 || y < 0 || x >= n || y >= n || a[x][y] == 1)return false;
	return true;
}
void fun(int sx, int sy, int diam){
	if(sx == n-1 and sy == n-1){
		if(diam > diamonds){
			diamonds = diam;
			for(int i = 0; i < n; i++){
				for(int j = 0; j < n; j++){
					ans[i][j] = a[i][j];
				}
			}
		}
		return;
	}
	for(int i = 0; i < 4; i++){
		int new_x = xx[i] + sx;
		int new_y = yy[i] + sy;
		if(valid(new_x, new_y)){
			int check = (a[new_x][new_y] == 2)? 1: 0;
			a[new_x][new_y] = 3;
			fun(new_x, new_y, diam + check);
			a[new_x][new_y] = (check == 1)? 2: 0;
		}
	}
	
}
int main(){
    int t;
    cin>>t;
    for(int test_case = 1; test_case <= t; test_case++){
    	cin>>n;
    	memset(a, 0, sizeof(a));
    	memset(ans, 0, sizeof(ans));
    	for(int i = 0; i < n; i++){
    		for(int j = 0; j < n; j++){
    			cin>>a[i][j];
    		}
    	}
    	diamonds = -1;
    	a[0][0] = 3;
    	fun(0, 0, 0);
    	for(int i = 0; i < n; i++){
    		for(int j = 0; j < n; j++){
    			cout<<a[i][j]<<" ";
    		}
    		cout<<endl;
    	}
    	cout<<'#'<<test_case<<" "<<diamonds<<endl;
    }
    return 0;
}
