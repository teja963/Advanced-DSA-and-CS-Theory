#include<bits/stdc++.h>
using namespace std;
int n, e, t, k;
float a[100][100], p = 1;
double ans[100];
void dfs(int src, int time){
if(time <= 0){
	ans[src] += p;
	return;
}
	for(int i = 1; i <= n; i++){
		if(a[src][i] != 0.0){
			p *= a[src][i];
			dfs(i, time - 10);
			p /= a[src][i];
		}
	}	
}
int main(){
		cin>>t;
		for(int test_case = 1; test_case <= t; test_case++){
			cin>>n>>e>>k;
			memset(a, 0.0, sizeof(a));
			memset(ans, 0.0, sizeof(ans));
			for(int i = 1; i <= e; i++){
				int src, dst;
				float p;
				cin>>src>>dst>>p;
				a[src][dst] = p;
			}
			dfs(1, k);
			int final_div = 1; float final_pro = 0.0;
			for(int i = 1; i <= n; i++){
				if(ans[i] > final_pro){
					final_div = i;
					final_pro = ans[i];
				}
			}
			cout<<final_div<<" "<<final_pro<<endl;
		}
}

