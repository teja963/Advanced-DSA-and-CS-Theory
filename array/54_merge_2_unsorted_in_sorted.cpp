#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// Your code goes hereclass Solution{
	

	class Solution{
	public:
	void sortedMerge(int a[], int b[], int res[],int n, int m)
	{
	   // Your code goes here
	   int i,j;
	   for(i=0;i<n;i++)res[i]=a[i];
	   for(i=n,j=0;i<n+m;i++,j++)res[i]=b[j];
	   sort(res,res+n+m);
	   
	}
	 
		 

};
	  


// { Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }

	    for(int i = 0;i<m;i++){
	        cin >> b[i];
	    }
	    
	    int res[n+m];

      
        Solution ob;
        ob.sortedMerge(a,b,res,n,m);

        for(int i = 0;i<n+m;i++){
	        cout << res[i] << " ";
	    }
	   
        
	    cout << "\n";
	     
    }
    return 0;
}
