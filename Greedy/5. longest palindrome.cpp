class Solution {
public:
    int longestPalindrome(string s) {
        int i,c=0,mi=0;
        unordered_map<char,int>m;
        for(i=0;i<s.size();i++)m[s[i]]++;
        for(auto x:m)
        {
         if(x.second%2==0)c+=x.second;
         else{
             c+=x.second-1;
             mi=1;
         }
        }
        if(mi)c++;
        return c;
    }
