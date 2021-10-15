#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
    //Function to count number of ways to reach the nth stair in which order is imp, otherwise return (1+n/2)
    int countWays(int n)
    {
        // your code here
        long long int v[n+1]={0};
        v[0]=1;
        v[1]=1;
        for(long long int i=2;i<=n;i++)v[i]=(v[i-1]+v[i-2])%1000000007;
        return v[n];
    }
};



// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}
