#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

#include<bits/stdc++.h>
class Solution{
    public:
    // your task is to complete this function
    int maxDistance(int arr[], int n)
    {
    //Code here
    int res = -INT_MAX;
    
    unordered_map<int, int=""> mp;
    
    for(int i = 0; i < n; i++)mp[arr[i]] = i;
    for(int j = 0; j < n; j++)res = max(res, abs(mp[arr[j]] - j));
    return res;
    
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
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.maxDistance(arr,n)<<endl;
    }
    return 0;
