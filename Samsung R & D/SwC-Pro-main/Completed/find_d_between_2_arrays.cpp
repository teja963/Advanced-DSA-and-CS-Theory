#include<bits/stdc++.h>
using namespace std;
int arr1[1000], arr2[1000], n;
int difference(int d){
	int tmp1 = 0, tmp2 = 0;
	for(int i = 0; i < n; i++){
		if(arr1[i] <= d)tmp1 += 1;
		else tmp1 += 2;
		if(arr2[i] <= d)tmp2 += 1;
		else tmp2 += 2;
	}
	return tmp2-tmp1;
}
int b_search(int low, int high){
	while(low < high){
			//cout<<low<<" "<<high<<endl;
			int mid_val = (low+high)/2;
			if(difference(mid_val-1) < difference(mid_val) and difference(mid_val) > difference(mid_val+1)){
				return mid_val;
			}
			else if(difference(mid_val) < difference(mid_val+1)){
				low = mid_val+1;
			}
			else high = mid_val-1;
		}
		return high;
}
int main(){
	cin>>n;
	memset(arr1, 0, sizeof(arr1));
	memset(arr2, 0, sizeof(arr2));
	int low = INT_MAX, high = INT_MIN;
	for(int i = 0; i < n; i++){
		cin>>arr1[i];
		low = min(low, arr1[i]);
		high = max(high, arr1[i]);
	}
	for(int i = 0; i < n; i++){
		cin>>arr2[i];
		low = min(low, arr2[i]);
		high = max(high, arr2[i]);
	}
	int ans = b_search(low, high);
	cout<<ans<<endl;
}
