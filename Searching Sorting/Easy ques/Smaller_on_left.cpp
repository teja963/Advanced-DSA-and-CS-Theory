vector<int> Smallestonleft(int arr[], int n)
{
    // Complete the function
    set<int>s;
    s.insert(-1);
    vector<int>ans(n);
    for(int i = 0; i < n; i++){
        s.insert(arr[i]);
        auto x = s.find(arr[i]);
        x--;
        ans[i] = *x;
    }
    return ans;
}
