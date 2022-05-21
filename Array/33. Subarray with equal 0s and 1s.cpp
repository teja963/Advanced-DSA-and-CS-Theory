#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
  public:
    //Function to count subarrays with 1s and 0s.
    long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
    {
        //Your code here
        long long int c=0;
        int i,j,s=0;
        unordered_map<int, int>m;
        for(i = 0; i < n; i++){
            if(arr[i] == 0)arr[i] = -1;
            s += arr[i];
            if(s == 0)c++;
            if(m[s])c += m[s];
            m[s]++;
        }
        return c;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution obj;
	cout<< obj.countSubarrWithEqualZeroAndOne(arr, n)<<"\n";
	}
	return 0;
}
