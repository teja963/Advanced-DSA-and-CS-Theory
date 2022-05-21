#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
        
    // arr[]: input array
    // n: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int arr[], int n) 
    { 
        
        // Your code here
       
       int i,j,k = 0,l[n],r[n];
       l[0] = arr[0];
       for(i = 1; i < n; i++)l[i] = min(l[i-1], arr[i]);
       r[n-1] = arr[n-1];
       for(i = n-2; i >= 0; i--)r[i] = max(arr[i], r[i+1]);
       i = 0; j = 0;
       while(i < n && j < n){
           if(l[i] <= r[j]){k = max(k, j-i); j++;}
           else i++;
       }
       return k;
    
        
    }
};

// { Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        
        //calling maxIndexDiff() function
        cout<<ob.maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
