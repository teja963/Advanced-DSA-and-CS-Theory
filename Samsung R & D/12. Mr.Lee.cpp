#include<bits/stdc++.h>
using namespace std;
int t, n, m, ans;
int a[100][100];
int visi[100];
void fun(int src, int count, int cost){
if(count == n-1){
	if(a[src][0] != 0){
		ans = min(ans, cost + a[src][0]);
	}
	return;
}
	for(int i = 0; i < n; i++){
		if(!visi[i] and a[src][i] != 0){
			visi[i] = 1;
			fun(i, count+1, cost + a[src][i]);
			visi[i] = 0;
		}
	}
}
int main(){
    int t;
    cin>>t;
    for(int test_case = 1; test_case <= t; test_case++){
    	cin>>n;
    	memset(a, 0, sizeof(a));
    	memset(visi, 0, sizeof(visi));
    	for(int i = 0; i < n; i++){
    		for(int j = 0; j < n; j++){
    			cin>>a[i][j];
    		}
    	}
    	ans = INT_MAX;
    	visi[0] = 1;
    	fun(0, 0, 0);
    	cout<<'#'<<test_case<<" "<<ans<<endl;
    }
    return 0;
}
