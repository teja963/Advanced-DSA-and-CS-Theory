/*
 * Longest Valid Parentheses Algorithm
 * 
 * LOGIC EXPLANATION:
 * This algorithm uses a two-pass scanning approach to find the longest valid parentheses substring.
 * 
 * First Pass (Left to Right):
 * - Count open and close parentheses while scanning
 * - When open == close: found valid substring, update answer
 * - When close > open: invalid sequence, reset counters
 * 
 * Second Pass (Right to Left):
 * - Same logic but reverse direction
 * - When open > close: invalid sequence, reset counters
 * - This catches cases missed by first pass like "(()"
 * 
 * Why two passes: Single pass misses valid substrings where direction matters
 * 
 * TIME COMPLEXITY: O(n) - Two linear scans
 * SPACE COMPLEXITY: O(1) - Only constant extra space
 * 
 * UNIQUE TEST CASES:
 * 1. Input: "(((()))" -> Output: 6 (nested with extra opening)
 * 2. Input: ")()())()()(" -> Output: 4 (multiple valid segments)  
 * 3. Input: "))))((((" -> Output: 0 (all invalid)
 * 4. Input: "(()())())((()))" -> Output: 8 (complex mixed pattern)
 */

class Solution {
public:
    int longestValidParentheses(string s) {
        int open = 0, close = 0, ans = 0;
        
        // First pass: left to right
        // Catches valid substrings where opening parentheses come first
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(') open++;
            else close++;
            
            // When balanced, we have a valid substring
            if(open == close) ans = max(ans, open + close);
            
            // Too many closing parentheses - invalid sequence, reset
            if(close > open){
                open = 0;
                close = 0;
            }
        }
        
        // Reset counters for second pass
        open = 0, close = 0;
        
        // Second pass: right to left  
        // Catches valid substrings where closing parentheses come first
        for(int i = s.size()-1; i >= 0; i--){
            if(s[i] == '(') open++;
            else close++;
            
            // When balanced, update answer
            if(open == close) ans = max(ans, open + close);
            
            // Too many opening parentheses - invalid sequence, reset
            if(open > close){
                open = 0;
                close = 0;
            }
        }
        
        return ans;
    }
};
