class Solution {
  public:
      long long  count(vector<int>&a,long long x)
      {
          long long start=0,sum=0,ct=0;
          for(int end=0;end<a.size();end++)
          {
              sum += a[end];
              while(start <= end && sum>x)
              {
                  sum -= a[start];
                  start++;
              }
              
              ct += (end-start+1);
          }
          return ct;
      }
    long long countSubarray(int N,vector<int> A,long long L,long long R) {
        // code here
        long long  l_count = count(A,L-1);  //count no.of subarrays having sum less than L in O(n) time
        long long  r_count = count(A,R);    //simliarly for R
        return r_count - l_count;
    }
};
