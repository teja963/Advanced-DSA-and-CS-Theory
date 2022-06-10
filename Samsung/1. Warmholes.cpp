#include<bits/stdc++.h>
using namespace std;
int t, n, ans;
int visited[100];
struct hole{
  int sx, sy, dx, dy, cost;  
};
struct point{
  int x, y;  
};
int cal(point src, point dst){
    return abs(src.x - dst.x) + abs(src.y - dst.y);
}
void solve(point src, point dst, hole h[], int cost){
    int tmp_ans = cost + cal(src, dst);
    ans = min(ans, tmp_ans);
    for(int i = 0; i < n; i++){
        if(!visited[i]){
            visited[i] = 1;
            
            point tmp1, tmp2;
            tmp1.x = h[i].sx; tmp1.y = h[i].sy;
            tmp2.x = h[i].dx; tmp2.y = h[i].dy;
            
            int val = cal(src, tmp1);
            solve(tmp2, dst, h, cost + val + h[i].cost);
            
            val = cal(src, tmp2);
            solve(tmp1, dst, h, cost + val + h[i].cost);
            
            
            visited[i] = 0;
        }
    }
    
}
int main() {
    cin>>t;
    while(t--){
        ans = INT_MAX;
        memset(visited, 0, sizeof(visited));
        cin>>n;
        hole h[n];
        point src, dst;
        cin>>src.x>>src.y>>dst.x>>dst.y;
        for(int i = 0; i < n; i++){
            cin>>h[i].sx>>h[i].sy>>h[i].dx>>h[i].dy>>h[i].cost; 
        }
        solve(src, dst, h, 0);
        cout<<ans<<endl;  
    }
    return 0;
}

