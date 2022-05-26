class Solution {
public:

    int numDecodings(string s) {
       if(s.size() == 0 || s[0] == '0')return 0;
       if(s.size() == 1)return 1;
       int count1 = 1, count2 = 1;
       for(int i = 1; i < s.size(); i++)
       {
           int single_digit = s[i] - '0';
           int double_digit = (s[i-1] - '0')*10 + single_digit;
           int count  = 0;
           if(single_digit > 0)count += count2;
           if(double_digit >= 10 && double_digit <= 26)count += count1;
           count1 = count2;
           count2 = count;
       }
        return count2;
    }
};
