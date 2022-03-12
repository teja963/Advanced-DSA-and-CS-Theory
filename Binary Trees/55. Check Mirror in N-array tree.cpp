
class Solution {
  public:
    int checkMirrorTree(int n, int e, int A[], int B[]) {
        // code here
        map<int, vector<int>>adj1, adj2;
        for(int i = 0; i < 2*e; i += 2){
            adj1[A[i]].push_back(A[i+1]);
            adj2[B[i]].insert(adj2[B[i]].begin(), B[i+1]);
        }
        
        if(adj1.size() != adj2.size())return 0;
        for(auto x: adj1){
            if(x.second != adj2[x.first])return 0;
        }
        return 1;
        
    }
};
