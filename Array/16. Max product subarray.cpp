#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
	// Function to find maximum product subarray
	long long maxProduct(int *arr, int n) {
	    // code here
	    long long int i,ans,mn,mx;
	    mn = mx = ans = arr[0];
	    for(i = 1; i < n; i++){
	        if(arr[i] < 0)swap(mn, mx);      //this is imp line and nice lagikkk
	        mx = max<long long int>(arr[i]*mx, arr[i]);
	        mn = min<long long int>(arr[i]*mn, arr[i]);
	        ans = max(ans, mx);
	    }
	    return ans;
	}
};

