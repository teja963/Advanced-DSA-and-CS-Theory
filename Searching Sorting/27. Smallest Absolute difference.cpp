nt count(int a[], int n, int mid){
    int ans = 0;
    for(int i = 0; i < n; i++){
         ans += upper_bound(a+i, a+n, a[i]+mid) - (a+i+1); 
    }
    return ans;
}
int kthDiff(int a[], int n, int k)
{
    sort(a, a+n);
    int low = a[1] - a[0];
    //Finding min element
    for(int i = 1; i <= n-2; i++)
    {
        low = min(low, a[i+1] - a[i]);
    }
    int high = a[n-1] - a[0];
    while(low < high){
        int mid = (low+high)/2;
        if(count(a, n, mid) < k)  
        {
            low = mid+1;
        }
        else
        {
            high = mid;
        }
    }
    return low;
}
