class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int one=0,two=0;
        for(auto x:nums)
        {
            one=(one^x)&(~two);
            two=(two^x)&(~one);
        }
        return one;  
    }
};
