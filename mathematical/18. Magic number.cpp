//Initial template for c++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    long long int nthMagicNo(int n) { 
        //complete the function here
        bitset<32>b(n);
        long long int i,j=0;
        for(i=0;i<32;i++){
            j+=pow(5,i+1)*b[i]; j%=(1000000007);}
        
        return j;
    }
};

// { Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthMagicNo(n) << endl;
    
    }
    return 0; 
