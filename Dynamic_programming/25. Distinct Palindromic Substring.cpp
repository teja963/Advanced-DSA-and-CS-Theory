  int palindromeSubStrs(string s) {
        // code here
       int n = s.size();
       unordered_map<string, int>m;
       for(int i = 0; i < n; i++)
       {
           for(int j = i; j < n; j++)
           {
               if(s[i] != s[j])continue;
               else
               {
                   string tmp = s.substr(i, j-i+1);
                   if(equal(tmp.begin(), tmp.begin() + tmp.size()/2, tmp.rbegin()))
                   {
                       m[tmp]++;
                   }
               }
           }
       }
       return m.size();
