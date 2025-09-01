class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string>m;
        unordered_set<string>st;
        int i, j;
        for(i = 0, j = 0; i < pattern.size(); i++, j++){
            string tmp;
            if(j >= s.size())return false;
            while(j < s.size() and s[j] != ' ')tmp += s[j++];
            if(m.find(pattern[i]) == m.end()){
                if(st.find(tmp) != st.end())return false;
                m[pattern[i]] = tmp;
                st.insert(tmp);
            }
            else if(m[pattern[i]] != tmp)return false;
        }
        if(j < s.size())return false;
        return true;
    }
};
