class Solution {
public:
    string getSmallestString(int n, int k) {
        string ans(n, 'a');
        k -= n;
        while(k > 0){
            ans[--n] += min(25,k);
            k -= min(25,k);
        }
        return ans;
    }
};
