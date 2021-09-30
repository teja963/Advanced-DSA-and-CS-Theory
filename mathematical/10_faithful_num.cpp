
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
    long long nthFaithfulNum(int N) {
        // code here
        if(N==1)
return 1;
long long int pow = 1, answer = 0;

while (N>0)
{

if (N & 1)
answer += pow;
pow = pow*7;
N >>= 1;
}
return answer;
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
        cout << ob.nthFaithfulNum(N) << endl;
    }
    return 0;
