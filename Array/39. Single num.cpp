#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
	int getSingle(int arr[], int n) {
	    // code here
	    int ans = arr[0];
	    for(int i = 1; i < n; i++)ans ^= arr[i];
	    return ans;
	}
};

