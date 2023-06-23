class Solution{   
  public:
    vector<int> farNumber(int N,vector<int> Arr){
        //code here
        vector<int>suffix_min(N), result;
        suffix_min[N-1];
        suffix_min[N-1] = Arr[N-1];
        for(int i = N-2; i >= 0; i--){
            suffix_min[i] = min(suffix_min[i+1], Arr[i]);
        }
        for(int i = 0; i < N; i++){
            int ans;
            auto x = lower_bound(suffix_min.begin()+i+1, suffix_min.end(), Arr[i]) - suffix_min.begin() - 1;
            if(x == i)result.push_back(-1);
            else result.push_back(x);
        }
        return result;
    }
};
