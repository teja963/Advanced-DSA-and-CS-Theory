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
// Output: 0

Constraints:
0 <= s.length <= 5 * 10^4
s consists of English letters, digits, symbols and spaces.

Solution: Sliding window using array to track character positions
Time Complexity: O(n), Space Complexity: O(1)
*/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> lastPos(256, -1);  // stores last index of each character
        int maxSize = 0;
        int left = 0;
        
        for(int right = 0; right < s.size(); right++){
            int idx = s[right] - 'a';  // subtract 'a' to get array index
            
            if(lastPos[idx] >= left){   // Updating the last index when ever found
                left = lastPos[idx] + 1;
            }
            
            lastPos[idx] = right;
            maxSize = max(maxSize, right - left + 1);
        }
        
        return maxSize;
    }
};
