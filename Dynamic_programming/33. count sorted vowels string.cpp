class Solution {
public:
    int countVowelStrings(int n) {
        vector<int>prev(5, 1), curr(5, 1);
        for(int i = 1; i < n; i++){
            for(int j = 0; j < 4; j++){
                curr[j+1] = prev[j+1] + curr[j]; 
            }
            prev = curr;
        }
        int ans = 0;
        ans = accumulate(curr.begin(), curr.end(), 0);
        return ans;
    }
};
