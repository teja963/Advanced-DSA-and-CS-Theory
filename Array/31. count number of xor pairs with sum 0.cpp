// C++ program to find number 
// of pairs in an array such
// that their XOR is 0
#include <bits/stdc++.h>
using namespace std;

// Function to calculate the
// count
long long int calculate(int a[], int n);

// Driver Code
int main()
{

	int t;
	cin>>t;
	while(t--)
	{
	  int n;
	  cin>>n;
	  int arr[n+1];
	  for( int i=0;i<n;i++)
	        cin>>arr[i];
	    cout << calculate(arr, n)<<endl;
        
	}
	return 0;
}

// } Driver Code Ends


long long int calculate(int a[], int n)
{
    // Complete the function
    sort(a,a+n);
    int i,j,k=0;
    long long int c=0;
    j=a[0];
    for(i=1;i<n;i++){
        if(j==a[i])k++;
        else {j=a[i]; c+=(k*(k+1)/2); k=0;}
        }
        if(k)c+=k*(k+1)/2;
        return c;
        
    
}
