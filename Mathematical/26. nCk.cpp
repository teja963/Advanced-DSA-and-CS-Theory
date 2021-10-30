// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int nCr(int n, int r){
        // code here
      vector<vector<int>>dp(n+1,vector<int>(r+1,0));
      int i,j,k;
      for(i=1;i<=n;i++){
          for(j=0;j<=r;j++){
              if(j==0||i==j)dp[i][j]=1;
              else dp[i][j]=(dp[i-1][j-1]+dp[i-1][j])%(1000000007);
          }
      }
      return dp[n][r];
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nCr(n, r)<<endl;
    }
    return 0;
