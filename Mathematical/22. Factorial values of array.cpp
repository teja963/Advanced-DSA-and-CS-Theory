//A[] = {0, 1, 2, 3, 4}
//       1  1  2  6  24

// A[] = {5, 6, 3}
//       120 720 6
class Solution{
public:
    vector<long long> factorial(vector<long long> a, int n) {
       int size=*max_element(a.begin(),a.end());
        vector<long long>v(size+1,1);
        int i,j,k;
        for(i=2;i<=size;i++)v[i]=(i*v[i-1])%1000000007;
        for(i=0;i<n;i++)a[i]=v[a[i]];
       return a;
    }
};


//Expected Time Complexity: O(max(A) + N)
//Expected Auxiliary Space: O(max(A))
