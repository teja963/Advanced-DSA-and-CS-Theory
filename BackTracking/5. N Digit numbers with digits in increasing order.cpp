void dfs(int start,int n,int tmp,vector<int>&ans)
{
    if(n <= 0)
    {
        ans.push_back(tmp);
        return;
    }
    for(int i = start; i <= 9 ;i++)
    {
        tmp = tmp * 10 + i;
        dfs(i+1,n-1,tmp,ans);
        tmp /= 10;
    }
}
    vector<int> increasingNumbers(int N)
    {
        // Write Your Code here
        vector<int>ans;
        if(N == 1)
        {
            dfs(0,N,0,ans);
        }
        else
        {
            dfs(1,N,0,ans);
        }
        return ans;
    }
};
