// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
        // code here
        int i,j,k=-1,l;
        l=arr[N-1];
        for(i=N-2;i>=0;i--){
            if(arr[i]>l)l=arr[i];
            else {l=arr[i]; k=i; break;}
        }
        if(k!=-1){
        for(i=N-1;i>k;i--){if(l<arr[i]){swap(arr[i],arr[k]); break;}}
        sort(arr.begin()+k+1,arr.end());
        return arr;}
        else{
            sort(arr.begin(),arr.end());
         return arr;
        
    }}
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
