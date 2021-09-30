#include<iostream>
#include<string.h>
using namespace std;
int PalinArray(int a[], int n);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		cout<<PalinArray(a,n)<<endl;
	}
}// } Driver Code Ends


/*Complete the function below*/
int PalinArray(int a[], int n)
{  //add code here.
int i,j,n1,rev,c=0;
for(i=0;i<n;i++){
    n1=a[i];
    rev=0;
    while(n1>0){
        rev=rev*10+n1%10;
        n1/=10;
    }
    if(a[i]==rev)c++;
}
if(c==n)return 1;
else return 0;
