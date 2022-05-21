#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        int i = 0, j, k;
        sort(A, A+n);
   		while(i < n-2)
    	{
        	j = i + 1;
       	 	k = n - 1;
         		while(j < k)
         		{
             		if(A[i] + A[j] + A[k] == X)return true;
             		else if(A[i] + A[j] + A[k] < X)j++;
             		else k--;
         		}
         i++;
    
    	}
     return false;
    }

};

// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}
