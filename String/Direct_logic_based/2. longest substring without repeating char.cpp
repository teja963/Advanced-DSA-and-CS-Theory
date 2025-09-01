/*
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3. Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.

Input: s = ""
Output: 0

Constraints:
0 <= s.length <= 5 * 104
s consists of English letters, digits, symbols and spaces.

Solution:
1. Using unordered set and Sliding two pointer approach
2. remove the elements untill you find the current element in the set

Time Complexity: O(string_size).  Space Complexity:O(K). //k = 256
*/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>set;  //for storing unique char using sliding window
        int i = 0,j = 0,size = 0;  //two pointer method
        while(i < s.size() && j < s.size()){
            if(set.find(s[j]) == set.end()){
                set.insert(s[j]);
                size = max(size, set.size());
                j++;
            }
            else{
                set.erase(s[i]);
                i++;
            }
        }
        return size;
    }