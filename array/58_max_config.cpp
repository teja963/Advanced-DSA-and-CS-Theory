#include<bits/stdc++.h>
using namespace std;

int max_sum(int A[],int N);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }

        cout<<max_sum(A,N)<<endl;
        /*keeping track of the total sum of the array*/

    }
}
// } Driver Code Ends


/*You are required to complete this method*/
int max_sum(int A[],int N)
{
//Your code here
     int i,j=0,s=0,c=0;
     for(i=0;i<N;i++){s+=A[i]; c+=i*A[i];}
     j=c;
     for(i=1;i<N;i++){
         int x=c-s+A[i-1]*N;    //get the current with O(1)
         c=x;                   // update the current value
         j=max(j,x);
     }
    
    return j;
