//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        //code here   
        vector<long long int>v(n);
        long long int m=1,k;
        int i,j;
        for(i=0;i<n;i++)m*=nums[i];
        for(i=0;i<n;i++){
            if(nums[i]!=0)v[i]=(m/nums[i]);
            else{
                k=1;
                for(j=0;j<n;j++)if(j!=i)k*=nums[j];
                v[i]=k;
            }}
        return v;
    }
};


// { Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
