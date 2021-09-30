#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	vector<int> valueEqualToIndex(int arr[], int n) {
	    // code here
	    int i,j,k;
	    vector<int>v;
	    for(i=0;i<n;i++)if(arr[i]==i+1)v.push_back(i+1);
	    return v;
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
        auto ans = ob.valueEqualToIndex(arr, n);
        if (ans.empty()) {
            cout << "Not Found";
        } else {
            for (int x: ans) {
                cout << x << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
