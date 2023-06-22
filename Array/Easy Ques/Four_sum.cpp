bool find4Numbers(int A[], int n, int X)  
{
    sort(A,A+n);
    for(int i = 0; i < n-3; i++)
    {
        for(int j = i+1; j < n-2; j++)
        {
            int k = j+1;
            int l = n-1;
             while(k < l)
             {
                int s = A[i] + A[j] + A[k] + A[l];
                if(s == X)return true;
                else if(s > X)l--;
                else k++;
             }
        }
    }
    return false;
}
