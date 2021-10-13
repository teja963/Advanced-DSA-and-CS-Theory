//Initial template for C++
#include<iostream>
using namespace std;
int maxArea(int A[], int len);

 // } Driver Code Ends
//User function template for C++
#include<bits/stdc++.h>
long long maxArea(long long A[], int len)
{
    // Your code goes here
   int l=0,h=len-1;
   long long int ans=0;
   while(l<h){
       ans=max(ans,(h-l)*min(A[l],A[h]));
       if(A[l]<A[h])l++;
       else h--;
       
   }
   return ans;
}

// { Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<maxArea(arr,n)<<endl;
    }
return 0;
}
