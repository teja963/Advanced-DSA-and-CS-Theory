//Input: num = "1432219", k = 3
//Output: "1219"
//Explanation: Remove the three digits 4, 3, and 2 to form the new number 1219 which is the smallest.

//Input: num = "10200", k = 1
//Output: "200"
//Explanation: Remove the leading 1 and the number is 200. Note that the output must not contain leading zeroes.

//Input: num = "10", k = 2
//Output: "0"
//Explanation: Remove all the digits from the number and it is left with nothing which is 0.
class Solution {
public:
    string removeKdigits(string num, int k) {
        string s="";
        for(int i=0;i<num.size();i++)
        {
            while(s.size()&&k&&num[i]<s.back()){ s.pop_back(); k--;}
            s+=num[i];
        }
        while(s.size()&&s[0]=='0')s=s.substr(1);  //removing leading zeros
        while(s.size()&&k){s.pop_back(); k--;}  // if the string is in ascending order
        return s.size()?s:"0";
        
    }
