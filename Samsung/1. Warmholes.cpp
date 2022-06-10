/*
There is a source (S) and destination (D) and a spacecraft has to go from S to D. There are N number of wormholes in between which has following properties:

Each wormhole has an entry and an exit. Each wormhole is bi-directional i.e. one can enter and exit from any of the ends. The time to cross the wormhole is given and the space craft may or may not use the wormhole to reach D. The cost to travel outside wormhole between two points (x1, y1) and (x2, y2) is given by a formula |x1 - x2| + |y1 - y2|

where, (x1, y1) and (x2, y2) are the co-ordinates of two points. The co-ordinates of S and D are given and we have to find the minimum cost to reach D from S. The main problem here is to minimum cost to reach spaceship from source to destination co-ordinate using any number of warm-hole. It is ok if you wont use any warmhole.

Note: It’s not mandatory to consider all the wormholes

Input Format

First line contains t, number of test cases

There are N number of warmholes each warmhole has 5 values. First 2 values are starting co-ordinate of warmhole and after that value no. 3 and 4 represents ending co-ordinate of warmhole and last 5th value is represents cost to pass through this warmhole.

Line 1 contains value of N. Line 2 Conatins Source and Destination coordinate. Next N lines contain the warmhole information.

Constraints

1 < t < 10
1 < N < 6
-1 < x < 101 
-1 < y < 101 
0 < cost < 101

Output Format

Output a single integer (minimum cost)

Sample Input 0

1
3
0 0 100 100
1 2 120 120 16
2 5 120 100 21
6 8 150 180 16
Sample Output 0

48
*/
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

