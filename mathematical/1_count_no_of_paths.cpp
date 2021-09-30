#include <bits/stdc++.h>
using namespace std;
 

 // } Driver Code Ends
long long  numberOfPaths(int m, int n)
{
    // Code Here
    if(m==1||n==1)return 1;
    else return numberOfPaths(m-1,n)+numberOfPaths(m,n-1);
}                                                            

// { Driver Code Starts.

 
int main()                             
{
	int t;
	cin>>t;
	while(t--)                                                    //A B C 
	{                                                                            //no.of ways to go from A TO I
		int n,m;                                              //D E F 
		cin>>m>>n;                                            //G H I 
	    cout << numberOfPaths(m, n)<<endl;
	}
    return 0;
