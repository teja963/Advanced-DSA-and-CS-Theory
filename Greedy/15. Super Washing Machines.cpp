class Solution {
public:
    int findMinMoves(vector<int>& machines) {
        int sum = accumulate(machines.begin(), machines.end(), 0);
        if(sum % machines.size())return -1; //Base case
        
        int avg = sum / machines.size(), ans = 0, prefix = 0;
        for(auto x: machines)
        {
            ans = max({ans, abs(prefix), x - avg});
            prefix += x-avg;
        }
        return ans;
        
    }
};
