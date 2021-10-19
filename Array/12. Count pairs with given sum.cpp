//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function template for C++
class Solution{   
public:
       int getPairsCount(int arr[], int n, int k) {
        // code here
        unordered_map<int, int> m;
        int ans = 0;
        for(int i = 0; i < n; i++)
            m[arr[i]]++;
        for(int i = 0; i < n; i++){
            if(arr[i] == k - arr[i])
                ans += m[arr[i]] - 1;
            else
                ans += m[k - arr[i]];
        }
        ans /= 2;
        return ans;
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
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
