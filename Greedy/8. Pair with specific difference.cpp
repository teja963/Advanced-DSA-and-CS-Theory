lass Solution{
    public:
    int maxSumPairWithDifferenceLessThanK(int arr[], int N, int K)
    {
        // Your code goes here
        sort(arr,arr+N);
        int s=0;
        for(int i=N-1;i>0;i--)
        {
            if(arr[i]-arr[i-1]<K)
            {
                s+=arr[i]+arr[i-1];
                i--;
            }
        }
       
        return s;
    }
};

