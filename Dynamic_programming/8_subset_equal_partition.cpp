// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
int subset(int arr[],int n,int s){
    if(s==0)return 1;
    if(n==0||s<0)return 0;
    else return subset(arr,n-1,s-arr[n-1])||subset(arr,n-1,s);
}
class Solution{
public:
    int equalPartition(int N, int arr[])
    {
        // code here
        int i,j,k,s=0;
        for(i=0;i<N;i++)s+=arr[i];
        if(s%2!=0)return 0;
        else return subset(arr,N,s/2);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
