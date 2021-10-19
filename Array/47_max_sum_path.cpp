   int i=0,j=0;
    long result=0,s1=0,s2=0;
    while(i<l1 && j<l2)
    {
        if(A[i]<B[j])s1 += A[i++]; 
        else if(A[i]>B[j])s2 += B[j++];
        else
        {
            result += max(s1,s2);
             s1=0,s2=0;
            while(i<l1 && j<l2 && A[i]==B[j])
            {
                result = result + A[i++];
                j++;
            }
        }
    }
    while(i<l1)s1 += A[i++];
    while(j<l2)s2 += B[j++];
    result += max(s1,s2);
