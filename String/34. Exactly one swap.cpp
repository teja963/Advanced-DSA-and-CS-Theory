   long long countStrings(string S)
    {
        // code here
        long long int ans = 0;
        bool duplicate = false;
        vector<int>v(26,0);
        for(int i = 0; i < S.size(); i++){
            v[S[i] - 'a']++;
            if(v[S[i] - 'a'] >= 2)duplicate = true;
        }
        for(int i = 0; i < S.size(); i++){
            v[S[i] - 'a']--;       //for avoiding duplicates
            ans += (S.size() - i - 1 - v[S[i] - 'a']);      //counting distnict
        }
        return duplicate? ans + 1: ans;
    }
