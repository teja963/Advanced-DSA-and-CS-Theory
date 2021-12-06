  int KthSmallest(int m, int n, int k) {
        //Write your code here
        int l=1,h=m*n;
        while(l<=h)
        {
            int mid=(l+h)/2;
            int count=0;
            for(int i=1;i<=m;i++)count+=min(mid/i,n);
            if(count<k)l=mid+1;
            else h=mid-1;
        }
        return l;
        
        
// Python3 
   def findKthNumber(self, m, n, k):
        #Write your code here
        
        l=1
        h=m*n
        while l<=h:
            mid=int((l+h)/2)
            count=0
            for i in range(1,m+1): count+=min(int(mid/i),n)
            if count<k: l=mid+1
            else: h=mid-1

        return l

