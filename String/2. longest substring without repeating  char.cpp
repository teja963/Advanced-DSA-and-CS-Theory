//Input: s = "abcabcbb"
//Output: 3
//Explanation: The answer is "abc", with the length of 3.

//Input: s = "bbbbb"
//Output: 1
//Explanation: The answer is "b", with the length of 1.

//Input: s = "pwwkew"
//Output: 3
//Explanation: The answer is "wke", with the length of 3. Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.

//Input: s = ""
//Output: 0
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>set;  //for storing unique char using sliding window
        int i=0,j=0,size=0;  //two pointer method
        while(i<s.size()&&j<s.size()){
            if(set.find(s[j])==set.end()){
                set.insert(s[j]);
                int n=set.size();
                size=max(size,n);
                j++;
            }
            else{
                set.erase(s[i]);
                i++;
            }
        }
        return size;
             
    }
    
    
// 2nd method

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      vector<int>v(256,-1);
        int i,j=0,k=0,x;
        for(i=0;i<s.size();i++){
            j=max(j,v[s[i]]+1); 
            x=i-j+1;  // maintaining the len size of string
            k=max(k,x); //final string len as ans
            v[s[i]]=i;
        }
        return k;
    }
};
