class Solution {
    vector<int>v1;
    vector<vector<int>>v2;
    void solve(int start,vector<int>&c,int target,vector<int>&v1,vector<vector<int>>&v2)
    {
        if(target == 0)
        {
            v2.push_back(v1);
            return;
        }
        for(int i = start; i < c.size(); i++)         //for changing the size choosing
        {
            if(i > start && c[i] == c[i-1])continue;  //for skipping duplicate combinations
            if(target >= c[i])                    //add untill this condition
            {
            	v1.push_back(c[i]);               
            	solve(i+1, c, target-c[i], v1, v2);       //recursively call for fun to update target 
            	v1.pop_back();
           }
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
          sort(candidates.begin(),candidates.end());
          solve(0,candidates,target,v1,v2);
        return v2;
    }
