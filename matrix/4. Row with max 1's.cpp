#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    vector<int>v(n);
	    int i,j,k=0;
	    for(i=0;i<n;i++){
	       for(j=0;j<m;j++){
	           if(arr[i][j]==1)k++;
	       }
	        v[i]=k;
	        k=0;
	    }
	    k=*max_element(v.begin(),v.end());
	    if(k==0)return -1;
	    for(i=0;i<n;i++)if(k==v[i])return i;
	}
	    
	

};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
