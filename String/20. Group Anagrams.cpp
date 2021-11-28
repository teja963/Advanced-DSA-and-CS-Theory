class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       vector<vector<string>>ans;
        unordered_map<string,vector<string>>m;
        for(auto x:strs)
        {
         string s=x;
         sort(s.begin(),s.end());
         m[s].push_back(x);
        }
        for(auto x:m)
        {
            ans.push_back(x.second);
        }
        return ans;
    }
};
