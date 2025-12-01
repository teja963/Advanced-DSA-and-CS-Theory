//Repeated substring pattern
/*
Given a string s, check if it can be constructed by taking a substring of it and appending multiple copies of the substring together.

ONE-LINE CONCEPT: If a string is made of repeated patterns, it will appear as a substring in its doubled version after removing the first and last characters, because repeated patterns create rotational symmetry.

Example 1:
Input: s = "abab"
s + s = "abababab"
Remove first/last: "bababa"
"abab" found in "bababa" → true

Example 2:
Input: s = "aba"  
s + s = "abaaba"
Remove first/last: "baab"
"aba" NOT found in "baab" → false

Example 3:
Input: s = "abcabcabcabc"
s + s = "abcabcabcabcabcabcabcabc"
Remove first/last: "bcabcabcabcabcabcabcab"
"abcabcabcabc" found → true

Time Complexity: O(n^2) in worst case for string search
Space Complexity: O(n) for the doubled string

*/

class Solution {
    public:
        bool repeatedSubstringPattern(string s) {
            string tmp = s + s;
            tmp = tmp.substr(1, 2*s.size()-2); //remove first and last char
            return tmp.find(s) != string::npos;
        }
    };
    