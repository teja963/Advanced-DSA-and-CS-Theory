/*
this is a mix of dfs with dp
*/
 
#include<iostream>
using namespace std;
 
int n,m; 
int a[100][100];
 
int r[] = {0, -1, 0, 1};
int c[] = {-1, 0, 1, 0};
 
int dp[100][100];
 
bool valid(int x, int y){
    return (x>0 && x<=n && y>0 && y<=m && a[x][y] == 1);
}
 
void solve(int sx, int sy, int dx, int dy, int ans){
    
   /*
    the below statement is written to avoid unnecessary calls of recursion
    for example there are 2 paths a->b->c and e->b->c;
    now in path and path 2 b is present in both 
    suppose a->b cost is less than e->b then there is no point to call further recursion from 
    path 2 
    here local minimum leads to global minimum
   */
 
    if(dp[sx][sy] > ans){
    dp[sx][sy] = ans;
    
    for(int i = 0; i<4; i++){
        
        int x = sx + r[i];
        int y = sy + c[i];
        
        if(valid(x, y)){
           int temp;
           if(y == sy)temp = 1;
           if(x == sx)temp = 0;
           solve(x,y,dx,dy,ans+temp);
        }
    }
   }
    
}
 
int main(){
    
    cin>>n>>m;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
           dp[i][j] = 1000000;
           cin>>a[i][j];
        }
    }    
  
    int sx,sy,dx,dy;    
    cin>>sx>>sy>>dx>>dy;
   
    solve(sx, sy, dx, dy, 0);
    
    cout<<dp[dx][dy]<<endl;
    
    return 0;
}
