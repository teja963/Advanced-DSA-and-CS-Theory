#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	long long subCount(long long arr[], int N, long long K)
	{
	    // Your code goes here
	    int i,j,s = 0,c = 0,l;
	    unordered_map<int,int>m;
	    for(i=0;i<N;i++){
	        s += arr[i];
	        l = ((s%K)+K)%K;
	        if(l == 0)c++;                    //(((s%K)+K)%K is done as the sum can be neg
	        if(m[l])c += m[l];
	        m[l]++;
	        
	    }
	    return c;
	    
	}



};


// { Driver Code Starts.

int main() 
{
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
       	long long k;
		cin>>n >> k;
		long long a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
        

        Solution ob;
        cout << ob.subCount(a, n, k);
	    cout << "\n";
	     
    }
    return 0;
}
