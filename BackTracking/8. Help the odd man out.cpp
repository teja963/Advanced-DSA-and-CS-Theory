class Solution{
public:
    vector<int> shiftPile(int N, int n){
        // code here
          vector<vector<int>> v;
        help(1,3,2,v , N);
        return v[n-1];
    }
    void help(int src, int dest , int helper ,vector<vector<int>> &v ,int n ){
        if(n ==  0) return;
        help(src , helper , dest , v , n-1 );
        v.push_back({src , dest});
        help( helper , dest , src , v , n-1 );
    }
};
