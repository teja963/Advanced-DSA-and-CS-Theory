#include<bits/stdc++.h>
using namespace std;
int left_max[10000], right_max[1000], left_min[1000], right_min[1000], a[1000], n;
void fun(int a[1000], int n, int left[1000], int right[1000]){
	/*calculating left max*/
	int tmp = a[0], ans = a[0];
	left[0] = a[0];
	for(int i = 1; i < n; i++){
		tmp = max(a[i], tmp + a[i]);
		ans = max(ans, tmp);
		left[i] = ans;
	}
	/*calculating right max*/
	tmp = a[n-1], ans = a[n-1], right[n-1] = a[n-1];
	for(int i = n-2; i >= 0; i--){
		tmp = max(a[i], tmp + a[i]);
		ans = max(ans, tmp);
		right[i] = ans;
	}	
}
int main(){
	cin>>n;
	memset(left_max, 0, sizeof(left_max));
	memset(right_max, 0, sizeof(right_max));
	memset(left_min, 0, sizeof(left_min));
	memset(right_min, 0, sizeof(right_min));
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	fun(a, n, left_max, right_max);
	/*inverting values*/
	for(int i = 0; i < n; i++){
		a[i] = -a[i];
		//cout<<left_max[i]<<" "<<right_max[i]<<endl;
	}
	
	fun(a, n, left_min, right_min);
	
	for(int i = 0; i < n; i++){
		left_min[i] = -left_min[i];
		right_min[i] = -right_min[i];
	}
	
	int ans = INT_MIN;
	for(int i = 0; i < n; i++){
		ans = max({ans, abs(right_max[i]-left_min[i+1]), abs(left_max[i]-right_min[i+1])}); 
	}
	cout<<ans<<endl;
}
