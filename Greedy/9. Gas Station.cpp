class Solution {
public:
    
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sum_gas = 0,sum_cost = 0,sum = 0,ans = 0;
        for(int i = 0; i < gas.size(); i++)
        {
            sum_gas += gas[i];
            sum_cost += cost[i];
            sum += gas[i]-cost[i];
            if(sum < 0)
            {
                ans = i+1;
                sum = 0;
            }
        }
        return sum_gas < ssum_cost?-1:ans;
        
    }
};
