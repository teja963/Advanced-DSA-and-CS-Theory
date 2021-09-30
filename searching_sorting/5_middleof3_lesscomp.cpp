//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function template for C++

class Solution{
  public:
    int middle(int A, int B, int C){
        //code here//Position this line where user code will be pasted.
        int i1,i2,i3;
        i1=(A<B)+(A<C);
        i2=(B<A)+(B<C);
        i3=(C<A)+(C<B);
        if(i1==1)return A;
        if(i2==1)return B;
        else return C;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,C;
        cin>>A>>B>>C;
        Solution ob;
        cout<<ob.middle(A,B,C) <<"\n";
    }
    return 0;
