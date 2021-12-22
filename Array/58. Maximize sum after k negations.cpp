 long long int maximizeSum(long long int a[], int n, int k)
    {
        // Your code goes here
        sort(a,a+n);
        long long int m=INT_MAX;
        for(int i = 0;i < n ;i++)
        {
            if(k && a[i] < 0){
                a[i] =- a[i];
                k--;
            }
            m = min(m,a[i]);
        }
        long long int ans=0;
        for (int i = 0; i < n; i++)
        {
            ans += a[i];
        }
        if (k%2)ans -= 2 * m;
        return ans;
        
    }
};
