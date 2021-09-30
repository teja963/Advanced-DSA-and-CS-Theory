#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    int maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        int i,j,s=0,ans=0;
        if(K>N)return -1;
        for(i=0;i<K;i++)s+=Arr[i];
        ans=s;
        for(i=1;i<=N-K;i++){ s+=Arr[i+K-1]-Arr[i-1]; ans=max(ans,s);} 
        return ans;
        
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
