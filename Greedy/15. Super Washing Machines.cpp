class Solution {
public:
    int findMinMoves(vector<int>& machines) {
        int sum = accumulate(machines.begin(), machines.end(), 0);
        if(sum % machines.size())return -1; //Base case
        
        int avg = sum / machines.size(), ans = 0, prefix = 0;
        for(auto x: machines)
        {
            sum = max( x - avg, abs(prefix));
            ans = max(ans, sum);
            prefix += x-avg;
        }
        return ans;
        
    }
};
