
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution {
  public:
    int countSquares(int N) {
        // code here
        int i;
        for(i=1;i<sqrt(N);i++)i;
        return i-1;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.countSquares(N) << endl;
    }
    return 0;
