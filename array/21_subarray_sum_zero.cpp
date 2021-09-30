// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;


bool subArrayExists(int arr[], int n);
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    	if (subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}// } Driver Code Ends


//Complete this function
bool subArrayExists(int arr[], int n)
{
    //Your code here
    int sum=0;
    unordered_map<int, int> prevSum;
 
    int res = 0;
 
    // Sum of elements so far.
    int currsum = 0;
 
    for (int i = 0; i < n; i++) {
 
        // Add current element to sum so far.
        currsum += arr[i];
 
        // If currsum is equal to desired sum,
        // then a new subarray is found. So
        // increase count of subarrays.
        if (currsum == sum)
            res++;
 
        // currsum exceeds given sum by currsum
        //  - sum. Find number of subarrays having
        // this sum and exclude those subarrays
        // from currsum by increasing count by
        // same amount.
        if (prevSum.find(currsum - sum) != prevSum.end())
            res += (prevSum[currsum - sum]);
 
        // Add currsum value to count of
        // different values of sum.
        prevSum[currsum]++;
    }
 
    return res;
}


