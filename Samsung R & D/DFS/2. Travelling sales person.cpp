/*
Given a matrix M of size N where M[i][j] denotes the cost of moving from city i to city j. Your task is to complete a tour from the city 0 (0 based index) to all other cities such that you visit each city atmost once and then at the end come back to city 0 in min cost.

Example: Input: 2 2 0 111 112 0 3 0 1000 5000 5000 0 1000 1000 5000 0 Output: 223 3000

Input Format

Input: The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. Each test case contains an integer N denoting the size of the matrix then in the next line are N*N space separated values of the matrix M.

Constraints

Constraints: 1<=T<=15 
			 1<=N<=12
			 1<=M[][]<=10000

Output Format

Output: For each test case print the required result denoting the min cost of the tour in a new line.

Sample Input 0

2
2
0 111
112 0
3
0 1000 5000
5000 0 1000
1000  5000  0
Sample Output 0

223
3000
*/
#include<bits/stdc++.h>
using namespace std;
int ans;
int n;
int visited[15];
void dfs(int curr, int cost, int a[15][15], int left){
    if(left == 0){
        cost += a[curr][0];
        ans = min(ans, cost);
        return;
    }
    for(int i = 1; i < n; i++){
        if(!visited[i]){
            visited[i] = 1;
            dfs(i, cost + a[curr][i], a, left-1);
            visited[i] = 0;
        }
    }
}
int main() {
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        int a[15][15];
        ans = INT_MAX;
        memset(a, 0, sizeof(a));
        for(int i = 0; i < n; i++)for(int j = 0; j < n; j++)cin>>a[i][j];
        memset(visited, 0, 15*sizeof(int));
        visited[0] = 1;
        dfs(0, 0, a, n-1);
        cout<<ans<<endl;
    }
    return 0;
}

