int minSwap(int *arr, int n, int k) 
{
    int ans=100000,cnt=0,p;
    for(int i = 0; i < n ; i++)
    {
        if(arr[i]<=k)
            cnt++;
    }
    for(int i = 0; i < cnt ; i++)
    {
        if(arr[i]>k)
            p++;
    }
    ans=min(ans,p);
    for(int i = 1 ; i <= n-cnt ; i++)
    {
        if(arr[i-1]>k)
            p--;
        if(arr[i+cnt-1]>k)
            p++;
        ans=min(ans,p);
    }
    
    return ans;
