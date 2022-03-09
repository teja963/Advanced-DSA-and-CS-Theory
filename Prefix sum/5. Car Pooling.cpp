class Solution {
public:
    
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int>curr_capacity(1001, 0);
        int max_destination = INT_MIN;
        for(int i = 0; i < trips.size(); i++){
            curr_capacity[trips[i][1]] += trips[i][0];
            curr_capacity[trips[i][2]] -= trips[i][0];
            max_destination = max(max_destination, trips[i][2]);
        }
        int prefix_sum = 0;
        for(int i = 0; i <= max_destination; i++){
            prefix_sum += curr_capacity[i];
            if(prefix_sum > capacity)return false;
        }
        return true;
    }
};
