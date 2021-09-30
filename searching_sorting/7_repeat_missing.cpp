#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends


class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int i,j;
        int *a;
        for(i=0;i<n;i++){
            if(arr[abs(arr[i])-1]>0)arr[abs(arr[i])-1]=-arr[abs(arr[i])-1];
            else j=abs(arr[i]);
        }
        a[0]=j;
        for(i=0;i<n;i++)if(arr[i]>0)j=i+1;
        a[1]=j;
        return a;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
