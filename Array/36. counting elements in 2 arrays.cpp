// C++ implementation of For each element in 1st 
// array count elements less than or equal to it
// in 2nd array
#include <bits/stdc++.h>
 
using namespace std;


 // } Driver Code Ends
// function to count for each element in 1st array,
// elements less than or equal to it in 2nd array
int binary_search(int a[],int l,int h,int x){
     while (l <= h) {
        int mid = (l + h) / 2;
        if (a[mid] <= x)l = mid + 1;
        else h = mid - 1;
}
    return h;

}
class Solution{
  public:
    vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], 
                                 int m, int n)
    {
    //Your code goes here
       sort(arr2, arr2+n);
       vector<int>v;
       int i = 0,j = 0,k = 0;
       for(i = 0; i < m; i++){
           k = binary_search(arr2, 0, n-1, arr1[i]);
           v.push_back(k+1);
       }
       return v;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        int arr1[m],arr2[n];
        for(int i=0;i<m;i++)
        cin>>arr1[i];
        for(int j=0;j<n;j++)
        cin>>arr2[j];
        Solution obj;
        vector <int> res = obj.countEleLessThanOrEqual(arr1, arr2, m, n);
        for (int i = 0; i < res.size (); i++) cout << res[i] << " ";
        
        cout<<endl;
    }
    return 0;
