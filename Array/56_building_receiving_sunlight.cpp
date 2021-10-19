#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    int longest(int arr[],int n)
    {
        // Write your code here
        int i,j=arr[0],c=1;
        for(i=1;i<n;i++)if(j<=arr[i]){j=arr[i]; c++;}
        return c;
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
        cin>>n;
        int i, arr[n+5];
        for(i=0;i<n;i++)
        cin>>arr[i];
        Solution ob;
        cout<<ob.longest( arr, n )<<endl;
    }
    return 0;
