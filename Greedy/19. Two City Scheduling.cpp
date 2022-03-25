class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int min_cost = 0;
        vector<int>difference;
        for(int i = 0; i < costs.size(); i++){
            min_cost += costs[i][0];
            difference.push_back(costs[i][1] - costs[i][0]);
        }
        sort(difference.begin(), difference.end());
        for(int i = 0; i < costs.size() / 2; i++){
            min_cost += difference[i];
        }
        
        return min_cost;
    }
};
