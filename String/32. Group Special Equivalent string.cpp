class Solution {
public:
    string fun(string s)
    {
        string even, odd;
        for(int i = 0; i < s.size(); i++)
        {
            if(i & 1)odd += s[i];
            else even += s[i];
        }
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());
        return odd + even;
    }
    int numSpecialEquivGroups(vector<string>& words) {
        vector<string>v;
        unordered_map<string,int>m;
        int ans = 0;
        for(int i = 0; i < words.size(); i++)
        {
            v.push_back(fun(words[i]));
        }
        for(auto x: v)
        {
            m[x]++;
        }
        for(auto x: m)
        {
            if(x.second > 0)ans++;
        }
        return ans;
    }
};
