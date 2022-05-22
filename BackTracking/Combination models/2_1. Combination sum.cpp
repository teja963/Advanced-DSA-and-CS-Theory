//Input: candidates = [2,3,6,7], target = 7
//Output: [[2,2,3],[7]]

//Input: candidates = [2,3,5], target = 8
//Output: [[2,2,2,2],[2,3,3],[3,5]]
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
        
        for(int i=start;i<c.size();i++)         //for changing the size choosing
        {
            if(target >= c[i])                    //add untill this condition
            {
            	v1.push_back(c[i]);               
            	solve(i, c, target-c[i], v1, v2);       //recursively call for fun to update target 
            	v1.pop_back();
           }
        }
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        solve(0,candidates,target,v1,v2);
        return v2;
    }
