/*
/*
There are n balloons and n bullets and each balloon is assigned with a particular number (point).
Whenever a particular balloon is shot the no of points increases by
1.the multiplication of point assigned to balloon on left and that of right side.
2.point assigned to left if no right exists
3.point assigned to right if no left exists.
4.the point assigned to itself if no other balloon exists.
 
You have to output the maximum no of points possible.
 
Input
1 2 3 4
 
Output
20
*/
#include<bits/stdc++.h>
using namespace std;
int t, n;
long long int ans;
int visited[20];
int fun_left(int i){
    while(i >= 0 and visited[i] == 1)i--;
    return i;
}
int fun_right(int i){
    while(i <= n and visited[i] == 1)i++;
    return i;
}
void fun(vector<int>&v, int count, long long int tmp_ans){
    if(count == n){
        ans = max<long long int>(ans, tmp_ans);
        return;
    }
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            visited[i] = 1;
            
            int left = fun_left(i);
            int right = fun_right(i);
            long long tmp = v[left]*v[right];
            if(count == n-1)fun(v, count+1, v[i]+tmp_ans);
            else fun(v, count+1, tmp+tmp_ans);
            
            visited[i] = 0;
        }
    }
}
int main(){
        cin>>n;
        vector<int>v(n+2, 0);
        for(int i = 1; i <= n; i++){
            cin>>v[i];
        }
        v[0] = 1;
        v[n+1] = 1;
        ans = 0;
        memset(visited, 0, sizeof(visited));
        for(int i = 1; i <= n; i++){
            visited[i] = 1;
            int left = fun_left(i);
            int right = fun_right(i);
            fun(v, 1, v[left]*v[right]);
            memset(visited, 0, sizeof(visited));
        }
        if(n == 1)cout<<v[1]<<endl;
        else cout<<ans<<endl;
}
