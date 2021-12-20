 string convert(int x){
      string ans;
      while(x){
          int r = x%16;
          x /= 16;
          if(r <= 9)ans.push_back(char('0' + r));
          else ans.push_back(char('a' + (r - 10)));
      }
      return ans;
  }
    string encryptString(string S) {
        // code here
        string ans;
        int count = 1, i = 0;
        S += '$';
        for(int j = 1;j < S.size();j++)
        {
            if(S[i] == S[j])count++;
            else
            {
                ans += S[i];
                ans += convert(count);
                i = j;
                count = 1;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
