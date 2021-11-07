class Solution {
public:
    long long countVowels(string word) {
      long long int ans=0;
      /*  
        a b c a e u
              i         -- that i character present in (i+1)left substrings (n-i) right substrings
        (i+1)   (n-i)
        */
      for(int i=0;i<word.size();i++)
      {
          if(string("aeiou").find(word[i])!=string::npos)
              ans+=(i+1)*(word.size()-i);
      }
        return ans;
    }
};
