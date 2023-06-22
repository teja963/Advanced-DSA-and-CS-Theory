#include <bits/stdc++.h>
using namespace std;
class Solution{
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{
	    // Your code goes here
	    int i, j, k,c = 0;
	    sort(arr, arr+n);
	    for(i = 0; i < n-2; i++){
	        j = i+1;
	        k = n-1;
	        while(j < k){
	            if(arr[i] + arr[j] + arr[k] >= sum)k--;
	            else{
	                c += (k-j);          //this part is imp try to make all possible nums soo its like that
	                j++;
	            } 
	        }
	    }
	    return c;
	}
};

