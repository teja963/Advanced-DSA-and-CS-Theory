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
        if(visited[i] == 0){
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

