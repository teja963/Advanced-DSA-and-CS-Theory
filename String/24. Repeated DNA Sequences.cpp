class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
     vector<string> ans;
        unordered_map<string, int> m;
        if(s.size() < 10)return ans;
        for( int i = 0; i <= s.size()-10; i++)
        {
            string tmp = s.substr(i,10);
              m[tmp]++;
            if (m[tmp] == 2)ans.push_back(tmp);
        }
        return ans;
    }
};
