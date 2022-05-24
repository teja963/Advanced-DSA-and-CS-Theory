class Solution{
    public:
    bool fun(int start, vector<int>&A, int K, int M){
        if(start >= A.size())return true;
        for(int i = start + K - 1; i < A.size(); i++){
            if(A[i] - A[start] > M)return false;
            if(fun(i + 1, A, K, M))return true;
        }
        return false;
    }
    bool partitionArray(int N, int K, int M, vector<int> &A){
        // code here
        sort(A.begin(), A.end());
        return fun(0, A, K, M);
    }
