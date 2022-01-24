class Solution {
public:
    int check(vector<int>&v, int k)
    {
        int count = 0;
        for(auto x: v)
        {
            count += x / k + (x % k != 0);
        }
        return count;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        while(low < high)
        {
            int m = (low + high)/2;
            int hrs = check(piles,m);
            if(hrs > h)low = m + 1;
            else high = m;
        }
        return high;
        
    }
};
