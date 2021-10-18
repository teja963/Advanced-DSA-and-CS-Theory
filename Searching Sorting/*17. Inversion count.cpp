#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

long long int getSum(long long int BITree[], long long int index)
{
    long long int sum = 0;
    while (index > 0)
    {
        sum += BITree[index];
        index -= index & (-index);
    }
    return sum;
}



void updateBIT(long long int BITree[], long long int n, long long int index,long long int val)
{
    while (index <= n)
    {
       BITree[index] += val;
       index += index & (-index);
    }
}

void convert(long long int arr[], long long int n)
{
    long long int temp[n];
    for (int i=0; i<n; i++)temp[i] = arr[i];
    sort(temp, temp+n);
    for (int i=0; i<n; i++)arr[i] = lower_bound(temp, temp+n, arr[i]) - temp + 1;
}


class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        long long int invcount = 0;
        convert(arr, N);
        long long int BIT[N+1];
        for (int i=1; i<=N; i++)BIT[i] = 0;
    for (int i=N-1; i>=0; i--)
    {
        invcount += getSum(BIT, arr[i]-1);
        updateBIT(BIT, N, arr[i], 1);
    }
 
    return invcount;
}
    

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
