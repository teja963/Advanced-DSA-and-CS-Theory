class Solution{
  public:
    vector <int> countDistinct (int A[], int n, int k)
    {
        //code here.
        unordered_map<int,int>m;
        vector<int>v;
        if(k > n)return v;
        for(int i = 0; i < k; i++)m[A[i]]++;
        v.push_back(m.size());
        for(int i = 1; i <= n-k; i++)
        {
            m[A[i-1]]--;
            if(m[A[i-1]] == 0)m.erase(A[i-1]);
            m[A[i+k-1]]++;
            v.push_back(m.size());
        }
        return v;
    }
