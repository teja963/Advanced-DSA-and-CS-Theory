#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            int i,j,k,l=0;
            vector<int>v(n1+n2+n3);
            for(i = 0,j = 0; i < n1; i++)if(A[i] != A[j]){ A[++j] = A[i];}n1=j+1;
            for(i = 0,j = 0; i < n2; i++)if(B[i] != B[j]){ B[++j] = B[i];}n2=j+1;
            for(i = 0,j = 0; i < n3; i++)if(C[i] != C[j]){ C[++j] = C[i];}n3=j+1;
            i = 0; j = 0; k = 0;
            while(i < n1 && j < n2 && k < n3){
            	if(A[i] == B[j] && B[j] == C[k]){v[l++] = A[i]; i++; j++; k++;}
            	else if(A[i] < B[j])i++;
            	else if(B[j] < C[k])j++;
            	else k++;
        	}
            v.resize(l);
            return v;
        }
};

