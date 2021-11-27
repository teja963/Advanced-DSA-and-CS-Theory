	int NthRoot(int n, int m)
	{
	    // Code here.
	    int l=1,h=m;
	    while(l<=h)
	    {
	        int mid=(l+h)/2;
	        if(pow(mid,n)==m)return mid;
	        else if(pow(mid,n)>m)h=mid-1;
	        else l=mid+1;
	    }
	    return -1;
	}  
