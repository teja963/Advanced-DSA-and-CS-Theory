#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        int i = 0, j, k;
        sort(A, A+n);
   		while(i < n-2)
    	{
        	j = i + 1;
       	 	k = n - 1;
         		while(j < k)
         		{
             		if(A[i] + A[j] + A[k] == X)return true;
             		else if(A[i] + A[j] + A[k] < X)j++;
             		else k--;
         		}
         i++;
    	}
     return false;
    }
};
