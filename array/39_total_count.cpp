//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    int totalCount(int arr[], int n, int k) {
        // code here
            int i,j,c=0;
        for(i=0;i<n;i++){
            c+=arr[i]/k;
            if(arr[i]%k!=0)c++;
        }
        return c;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.totalCount(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}

