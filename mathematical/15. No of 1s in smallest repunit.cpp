// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int repUnit(int N){
        // code here
         int count = 1;
 
    // initialize rem with 1
    int rem = 1;
 
    // run loop until rem becomes zero
    while (rem != 0) {
 
        // rem*10 + 1 here represents
        // the repunit modulo n
        rem = (rem * 10 + 1) % N;
        count++;
    }
 
    // when remainder becomes 0
    // return count
    return count;}
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.repUnit(N)<<endl;
    }
    return 0;
