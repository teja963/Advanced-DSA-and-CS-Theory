class Solution {
  public:
    void prank(long long a[], int n){
        // code here
        for(int i = 0; i < n; i++)
        {
            a[i] = n * (a[a[i]] % n) + a[i] % n;
        }
        for(int i = 0; i < n; i++)
        {
            a[i] = a[i] / n;
        }
    }
};
