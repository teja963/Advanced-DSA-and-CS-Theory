class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size())return false;
        vector<int>m1(26,0),m2(26,0);
        int n = s1.size();
        for(int i = 0; i < n; i++)
        {
            m1[s1[i]-'a']++;
            m2[s2[i]-'a']++;
        }       
        for(int i = n; i < s2.size(); i++)
        {
            if(m1 == m2)return true;
            m2[s2[i]-'a']++;
            m2[s2[i-n]-'a']--;
        }
        return m1 == m2;
    }
};
