//Initial function template for C++

#include<bits/stdc++.h>

using namespace std;

#define ll long long 
ll findSubarray(vector<ll> , int );

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; //input size of array
       
        vector<ll> arr(n,0);
        
        for(int i=0;i<n;i++)
            cin>>arr[i]; //input array elements
        
        cout << findSubarray(arr,n) << "\n";
    }
	return 0;
}// } Driver Code Ends


//User function template for C++

// arr : given array 
// n : size of the given array
ll findSubarray(vector<ll> arr, int n ) {
    //code here
    unordered_map<int,int>m;
   long long int i,j,k=0,c=0;
    for(i=0;i<n;i++){
        k+=arr[i];
        if(k==0)c++;
        if(m.find(k-0)!=m.end())c+=m[k-0];
        m[k]++;
    }
    return c;
}
