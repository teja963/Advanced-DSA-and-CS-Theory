#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends




vector<long long> printFirstNegativeInteger(long long int A[],long long int N, long long int K) {
          vector<long long>v;
          int i=0,j=K,c,l=0;
          while(i<j&&j<=N){
              c=0;
              if(l<i)l=i;
              while(l<j){
                  if(A[l]<0){c=1 ;v.push_back(A[l]); break;}
                  else l++;
              }
              if(c==0)v.push_back(0);
              i++; j++;
              
          }
                  
          return v;
                                                 
