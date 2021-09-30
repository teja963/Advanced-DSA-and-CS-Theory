#include <iostream>
using namespace std;
#include <stdio.h>
 
int findEquilibrium(int [], int );
 
int main() {
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		cout<<findEquilibrium (a,n)<<endl;
	}
	// your code goes here
	return 0;
}// } Driver Code Ends


/* You are required to complete this method*/
int findEquilibrium(int A[], int n)
{
  //Your code here
    int i,j,k=0;
    int l[n],r[n];
    for(i=0;i<n;i++){l[i]=k; k+=A[i];}k=0;
    for(i=n-1;i>=0;i--){r[i]=k; k+=A[i];}
    for(i=0;i<n;i++)if(l[i]==r[i])return i;
    return -1;
