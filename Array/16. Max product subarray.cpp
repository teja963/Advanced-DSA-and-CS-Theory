#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
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

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends
