class Solution {
public:
     vector<vector<int>>ans;
    vector<int>v;
    void fun(int start,int k,int n)
    {
        if(v.size()==k&&n==0)
        {
            ans.push_back(v);
            return;
        }
        for(int i=start;i<10;i++)
        {
            v.push_back(i);
            fun(i+1,k,n-i);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
     fun(1,k,n);
    return ans;
    }
};
