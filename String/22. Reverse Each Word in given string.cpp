   string reverseWords (string s)
    {
        //code here.
        string ans;
        s += '$';
        int i=0, j;
        for(j = 0; j < s.size(); j++)
        {
            if(s[j] == '.')
            {
                string tmp = s.substr(i,j-i);
                reverse(tmp.begin(),tmp.end());
                ans += tmp;
                ans += '.';
                i = j+1;
            }
            if(s[j] == '$')
            {
                string tmp = s.substr(i,j-i);
                reverse(tmp.begin(),tmp.end());
                ans += tmp;
            }
        }
        return ans;
    }
