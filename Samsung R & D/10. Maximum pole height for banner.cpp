#include<bits/stdc++.h>
using namespace std;
int n, t, ans;
int a[100];
int visi[100];
void fun(int a[], int p1, int p2){
if(p1 == p2){
	ans = max(ans, p1);
}
	for(int i = 0; i < n; i++){
		if(!visi[i]){
			visi[i] = 1;
			fun(a, p1 + a[i], p2);
			fun(a, p1, p2 + a[i]);
			visi[i] = 0;
		}
	}
}
int main(){
		cin>>t;
		for(int test_case = 1; test_case <= t; test_case++){
			cin>>n;
			memset(a, 0, sizeof(a));
			memset(visi, 0, sizeof(visi));
			for(int i = 0; i < n; i++){
				cin>>a[i];
			}
			ans = INT_MIN;
			fun(a, 0, 0);
			cout<<'#'<<test_case<<" "<<ans<<endl;
		}
}

