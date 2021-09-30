// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
           if (n == 1)
       return 0;
 
    // Sort all elements
    sort(arr, arr+n);
 
    // Initialize result
    int ans = arr[n-1] - arr[0];
 
    // Handle corner elements
    int small = arr[0] + k;
    int big = arr[n-1] - k;
    if (small > big)
       swap(small, big);
 
    // Traverse middle elements
    for (int i = 1; i < n-1; i ++)
    {
        int subtract = arr[i] - k;
        int add = arr[i] + k;
 
        // If both subtraction and addition
        // do not change diff
        if (subtract >= small || add <= big)
            continue;
 
        // Either subtraction causes a smaller
        // number or addition causes a greater
        // number. Update small or big using
        // greedy approach (If big - subtract
        // causes smaller diff, update small
        // Else update big)
        if (big - subtract <= add - small)
            small = subtract;
        else
            big = add;
    }
 
    return  min(ans, big - small);
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
