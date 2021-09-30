#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int isPallindrome(long long int N){
        // code here
        bitset<32>b(N);
        int i,j;
        string s;
        for(i=32;i>=0;i--)if(b[i]==1){j=i; break;}
        for(i=j;i>=0;i--)s+=b[i]+'0';
        if(s==string(s.rbegin(),s.rend()))return 1;
        else return 0;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        Solution ob;
        cout << ob.isPallindrome(N) << endl;
    }
    return 0; 
