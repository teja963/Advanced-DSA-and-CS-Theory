class Solution {
public:
    long long countVowels(string word) {
      long long int ans=0;
      for(int i=0;i<word.size();i++)
      {
          if(string("aeiou").find(word[i])!=string::npos)
              ans+=(i+1)*(word.size()-i);
      }
        return ans;
    }
};
