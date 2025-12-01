class Solution {
public:
    string intToRoman(int num) {
      char* units    [] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
        char* tens     [] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
        char* hundreds [] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
        char* thousands[] = {"", "M", "MM", "MMM"};
        
        string result = "";
        
        int thousand_digit = num / 1000;
        int hundred_digit  = (num % 1000) / 100;
        int ten_digit  = (num % 100) / 10;
        int unit_digit  = (num % 10);

        result += thousands[thousand_digit];
        result += hundreds[hundred_digit];
        result += tens[ten_digit];
        result += units[unit_digit];   
    
       return result;
    }
};
