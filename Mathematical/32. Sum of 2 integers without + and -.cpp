class Solution {
public:
    int getSum(int a, int b) {
        uint carry = a & b;
        while(carry)
        {
            a ^= b;
            b = carry << 1;
            carry = a & b;
        }
        return a|b;
    }
};
