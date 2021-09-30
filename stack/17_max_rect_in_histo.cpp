#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        int len=n;
         long long int i,j,k;
         vector<long long int>l(len),r(len);
    stack<int>s;
    s.push(0);
    l[0]=0;
    for(i=1;i<len;i++){
            while(!s.empty()&&arr[s.top()]>=arr[i])s.pop();
            if(s.empty())l[i]=0;
            else l[i]=s.top()+1;
        
        s.push(i);
    }
    while(!s.empty())s.pop();
    s.push(len-1);
    r[len-1]=len-1;
    for(i=len-2;i>=0;i--){
            while(!s.empty()&&arr[s.top()]>=arr[i])s.pop();
            if(s.empty())r[i]=len-1;
            else r[i]=s.top()-1;
          
          s.push(i);
        
    }
    long long int a=0;
    for(i=0;i<len;i++){
        k=r[i]-l[i]+1;
        a=max(a,k*arr[i]);}
    return a;
    }
};


// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}
