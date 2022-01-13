class Solution {
public:
    static bool cmp(vector<int>&v1, vector<int>&v2)
    {
        if(v1[0] == v2[0])return v1[1] < v2[1];
        return v1[0] > v2[0];
    }
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        vector<vector<int>>ans;
        sort(people.begin(), people.end(), cmp);
        for(auto x: people)
        {
            ans.insert(ans.begin() + x[1], x);
        }
        return ans;
    }
};
