 long long int maximizeSum(long long int a[], int n, int k)
    {
        // Your code goes here
        sort(a,a+n);
        long long int m=INT_MAX, ans = 0;
        for(int i = 0;i < n ;i++)
        {
            if(k && a[i] < 0){
                a[i] =- a[i];
                k--;
            }
            ans += a[i];
            m = min(m,a[i]);
        }
        if (k%2)ans -= 2 * m;
        return ans;
        
    }
};
