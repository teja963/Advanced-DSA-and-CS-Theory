// A C++ program to print elements with count more than n/k

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        // Your code here
        unordered_map<int,int>m;
        int i,j=0;
        for(i=0;i<n;i++)m[arr[i]]++;
        for(i=*min_element(arr,arr+n);i<=*max_element(arr,arr+n);i++)if(m[i]>(n/k))j++;
        return j;
    }
};


// { Driver Code Starts.
int main() {
    int t, k;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;

        int arr[n];

        for (i = 0; i < n; i++) cin >> arr[i];
        cin >> k;
        Solution obj;
        cout << obj.countOccurence(arr, n, k) << endl;
    }
    return 0;
}
