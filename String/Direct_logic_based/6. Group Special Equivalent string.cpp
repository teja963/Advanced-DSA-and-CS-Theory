/*
PROBLEM: Groups of Special-Equivalent Strings

Two strings S and T are special-equivalent if you can perform any number of moves on S to make it equal to T.
In each move, you can swap any two characters at even indices or any two characters at odd indices.
Return the number of groups of special-equivalent strings.

A string is special-equivalent to another string if after sorting characters at even positions 
and characters at odd positions separately, they become identical.

TEST CASES:
- ["abcd","cdab"] -> 1
  "abcd": even=[0,2]="ac", odd=[1,3]="bd" → sorted(even)="ac", sorted(odd)="bd" → signature="bdac"
  "cdab": even=[0,2]="ca", odd=[1,3]="db" → sorted(even)="ac", sorted(odd)="bd" → signature="bdac"
  Same signature → same group
  
- ["abc","acb","bac","bca","cab","cba"] -> 3
  "abc": even=[0,2]="ac", odd=[1]="b" → signature="bac"
  "cba": even=[0,2]="ca", odd=[1]="b" → signature="bac" → Group 1: ["abc","cba"]
  "acb": even=[0,2]="ab", odd=[1]="c" → signature="cab"
  "bca": even=[0,2]="ba", odd=[1]="c" → signature="cab" → Group 2: ["acb","bca"]
  "bac": even=[0,2]="bc", odd=[1]="a" → signature="abc"
  "cab": even=[0,2]="cb", odd=[1]="a" → signature="abc" → Group 3: ["bac","cab"]
  
- ["aabb","abab","bbaa","baab"] -> 1
  All strings: even positions contain 2 'a's, odd positions contain 2 'b's
  After sorting: even="aa", odd="bb" → signature="bbaa" for all strings → Single group
  
- ["abcd","abdc","cbad","cbda"] -> 2
  "abcd"/"abdc": even=[0,2]="ad", odd=[1,3]="bc" → signature="bcad" → Group 1
  "cbad"/"cbda": even=[0,2]="cd", odd=[1,3]="ba" → signature="bacd" → Group 2
  
- ["abcde","fghij","klmno"] -> 3
  Different character sets produce unique signatures:
  "abcde": even="ace", odd="bd" → signature="bdace"
  "fghij": even="fhi", odd="gj" → signature="gjfhi"
  "klmno": even="kmo", odd="ln" → signature="lnkmo" → All different groups
  
- ["ab","ba","cd","dc"] -> 2
  "ab"/"ba": even=[0]="a", odd=[1]="b" → signature="ba" → Group 1
  "cd"/"dc": even=[0]="c", odd=[1]="d" → signature="dc" → Group 2
  
- ["abcdef","fedcba","bcdefa","cdefab"] -> 1
  All strings: even positions have {a,c,e}, odd positions have {b,d,f}
  After sorting: even="ace", odd="bdf" → signature="bdface" → Single group
  
- ["aaaa","bbbb","cccc"] -> 3
  "aaaa": even="aa", odd="aa" → signature="aaaa"
  "bbbb": even="bb", odd="bb" → signature="bbbb"
  "cccc": even="cc", odd="cc" → signature="cccc" → All different groups
  
- ["a","b","c"] -> 3
  Single character strings: even=[0]=char, odd="" → signature=char
  Each has unique signature → 3 separate groups
  
- ["abcd","abcd","efgh","efgh"] -> 2
  Duplicate strings with same characters form same groups
  "abcd" strings: signature="bdac" → Group 1
  "efgh" strings: signature="fhceg" → Group 2
*/

class Solution {
public:
    string fun(string s)
    {
        string even, odd;
        for(int i = 0; i < s.size(); i++)
        {
            if(i & 1)odd += s[i];
            else even += s[i];
        }
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());
        return odd + even;
    }
    int numSpecialEquivGroups(vector<string>& words) {
        vector<string>v;
        unordered_map<string,int>m;
        int ans = 0;
        for(int i = 0; i < words.size(); i++)
        {
            v.push_back(fun(words[i]));
        }
        for(auto x: v)
        {
            m[x]++;
        }
        for(auto x: m)
        {
            if(x.second > 0)ans++;
        }
        return ans;
    }
};
