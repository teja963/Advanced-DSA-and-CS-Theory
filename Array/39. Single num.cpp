#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends

//User function template for C++
class Solution{
public:
	int getSingle(int arr[], int n) {
	    // code here
	    int ans = arr[0];
	    for(int i = 1; i < n; i++)ans ^= arr[i];
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
        auto ans = ob.getSingle(arr, n);
        cout << ans << "\n";
    }
    return 0;
