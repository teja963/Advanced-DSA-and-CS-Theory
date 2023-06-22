#include<bits/stdc++.h>
using namespace std;
int maxSubarraySum(int arr[], int n){
    int i, sum = 0, ans = 0;
    for(i = 0; i < n; i++){
		sum = max(arr[i], sum + arr[i]);
		ans = max(sum, ans);
	}
    return ans;
    
}
