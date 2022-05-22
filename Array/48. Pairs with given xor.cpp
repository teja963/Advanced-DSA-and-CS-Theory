// Initial Template for C++
//1) Initialize result as 0.
//2) Create an empty hash set "s".
//3) Do following for each element arr[i] in arr[]
  // (a)    If x ^ arr[i] is in "s", then increment result by 1.
   //(b)    Insert arr[i] into the hash set "s".
//3) return result.
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
    public:
    int countPair(int N, int A[], int X){
        // code here
          int i,k=0,s=0;
          unordered_map<int,int>m;
          for(i = 0; i < N; i++){
              s = X ^ A[i];
              if(m[s])k += m[s];
              m[A[i]]++;
          }
          return k;
        
    }
};

// { Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int A[N];
        for(int i = 0;i < N;i++)
            cin>>A[i];
        int X;
        cin>>X;
        
        Solution ob;
        cout<<ob.countPair(N,A,X)<<endl;
    }
    return 0;
