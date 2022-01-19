int maximumSum( int n,int m, vector<vector<int>> &a) {

    // Complete the function
    int mini, ans = 0, maxi = INT_MAX;
    for(int i = n-1; i >=0; i--)
    {
        mini = INT_MIN;
        for(int j = 0; j < m; j++)
        {
            if(a[i][j] > mini and a[i][j] < maxi)
            {
                mini = a[i][j];
            }
        }
        if(mini == INT_MIN)return 0;
        ans += mini;
        maxi = mini;
    }
    return ans;
    
}
