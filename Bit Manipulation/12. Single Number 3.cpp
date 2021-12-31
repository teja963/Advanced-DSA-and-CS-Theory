class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
       long int tmp  = 0;
        vector<int>v(2);
        for(auto x:nums)tmp ^= x;
        long int last = tmp & -tmp;    //for getting last digit
        for(auto x:nums)
        {
            if(last & x)
            {
                 v[0] ^= x; 
            }
            else
            {
                v[1] ^= x;
            }
        }
        return v;
    }
};
