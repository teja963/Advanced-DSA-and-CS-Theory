#include<bits/stdc++.h>
using namespace std;
int t, n, m, ans;
int oil[100], visi[100];
void fun(int i, int min_val, int max_val, int sum, int nodes){
	if(visi[i]){
		int new_min = min(sum, min_val);
		int new_max = max(sum, max_val);
		if(nodes == n - 1){
			ans = min(ans, new_max - new_min);
		}
		return;
	}
	visi[i] = 1;
	int j = (i+1) % m;
	fun(j, min_val, max_val, sum+oil[i], nodes);
	int new_min = min(sum, min_val);
	int new_max = max(sum, max_val);
	fun(j, new_min, new_max, oil[i], nodes+1);
	visi[i] = 0;
} 
int main(){
    int t;
    cin>>t;
    for(int test_case = 1; test_case <= t; test_case++){
    	cin>>n>>m;
    	memset(oil, 0, sizeof(oil));
    	memset(visi, 0, sizeof(visi));
    	for(int i = 0; i < m; i++){
    		cin>>oil[i];
    	}
    	ans = INT_MAX;
    	for(int i = 0; i < m; i++){
    		fun(i, INT_MAX, INT_MIN, 0, 0);
    	}	
    	cout<<'#'<<test_case<<" "<<ans<<endl;
    }
    return 0;
}

