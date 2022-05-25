class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int>v(n);
        for(int i = 0; i < cost.size(); i++){
            if(i == 0 || i == 1)v[i]=cost[i];
            else v[i] = cost[i] + min(v[i-1], v[i-2]);
        }
        return min(v[n-1],v[n-2]);
        
    }
