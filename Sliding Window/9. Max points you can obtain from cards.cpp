class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        long long int tmp = 0, ans = 0, n = cardPoints.size();
        for(int i = 0; i < k; i++)tmp += cardPoints[i];
        ans = max(ans, tmp);
        for(int i = k-1; i >= 0; i--){
            tmp -= cardPoints[i];
            tmp += cardPoints[n-k+i];
            ans = max(ans, tmp);
        }
        return ans;
    }
};
