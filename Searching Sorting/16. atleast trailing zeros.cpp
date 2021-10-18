#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

bool check(int m,int n){
    int c=0,p=m;
   while(p>0){c+=p/5; p/=5;}
    return c>=n;
}


class Solution
{
    public:
        int findNum(int n)
        {
        //complete the function here
        if(n==1)return 5;
        int l=0,h=5*n;
        while(l<h){
            int m=(l+h)/2;
            if(check(m,n))h=m;
            else l=m+1;
        }
        return l;
        }
};

// { Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Solution ob;
        cout <<ob.findNum(n) << endl;
    }
return 0;
