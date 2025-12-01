/*
Given a string s and a string array dictionary, return the longest string in the dictionary that can be formed by deleting
some of the given string characters. If there is more than one possible result, return the longest word with the smallest
lexicographical order. If there is no possible result, return the empty string.


Example 1:

Input: s = "abpcplea", dictionary = ["ale","apple","monkey","plea"]
Output: "apple"
Example 2:

Input: s = "abpcplea", dictionary = ["a","b","c"]
Output: "a"
 

Constraints:
1 <= s.length <= 1000
1 <= dictionary.length <= 1000
1 <= dictionary[i].length <= 1000
s and dictionary[i] consist of lowercase English letters

The time complexity of the given code is __O(n log n * m + n * |s|)__, where:

- n = dictionary.length (size of dictionary)
- m = average length of strings in dictionary
- |s| = length of string s

Space Complexity: O(1)
*/
class Solution {
public:
    static bool cmp(string &a,string &b){
        if(a.size() == b.size())return a < b;
        return a.size() > b.size();
    }
    
    bool contain(string &s, string &a){ 
        if(s.size() < a.size())return false;
        int i = 0;
        for(auto x:s){
            if(i < a.size() && a[i] == x)i++;
        }
        if(i == a.size())return true;
        return false;
    }
    string findLongestWord(string s, vector<string>& dictionary) {
       sort(dictionary.begin(), dictionary.end(), cmp);
       int i = 0;
       for(i = 0; i < dictionary.size(); i++){
           if(contain(s,dictionary[i]))return dictionary[i];
       }
       return "";
    }
