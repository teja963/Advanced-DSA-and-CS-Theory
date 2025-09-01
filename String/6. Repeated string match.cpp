/*
Input: A = "abcd", B = "cdabcdab"
Output: 3
Explanation: After repeating A three times, 
we get "abcdabcdabcd".

Input: A = "aa", B = "a"
Output: 1
Explanation: B is already a substring of A.


A="orpjir"
B="jirorpjirorpjirorpjirorpjirorpjirorpjirorpjiror"

9

*/ 
 
 int repeatedStringMatch(string A, string B) 
    {
        // Your code goes here
        int c = 1;
        string s = A;
        while(A.find(B) == string::npos && A.size() <= B.size()+s.size()){ A += s; c++;}
        if(A.find(B) != string::npos)return c;
        return -1;
        
        
//Time Complexity: O(A*B) for checking matchers or not
//Space : O(1)



**Repeated substring pattern**
/*
Given a string s, check if it can be constructed by taking a substring of it and appending multiple copies of the substring together.

 

Example 1:

Input: s = "abab"
Output: true
Explanation: It is the substring "ab" twice.
Example 2:

Input: s = "aba"
Output: false
Example 3:

Input: s = "abcabcabcabc"
Output: true
Explanation: It is the substring "abc" four times or the substring "abcabc" twice.
 

Constraints:

1 <= s.length <= 104
s consists of lowercase English letters.

*/
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string tmp = s + s;
        tmp = tmp.substr(1, 2*s.size()-2); //remove frst and last char
        return tmp.find(s) != string::npos;
        
    }
};
