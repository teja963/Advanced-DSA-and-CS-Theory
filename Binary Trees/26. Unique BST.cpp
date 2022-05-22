class Solution {
public:
    long long int find(int n,int k){
        if(k>n-k)k = n-k;
        long long int ans=1;
        for(int i=0;i<k;i++){
            ans *= (n-i);
            ans /= (i+1);
        }
        return ans;
    }
    int numTrees(int n) {
        long long int x=find(2*n,n);
        return x/(n+1);
    }
