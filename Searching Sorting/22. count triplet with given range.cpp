class Solution {
  public:
    int count(int Arr[],int N,int x)
    {
         sort(Arr,Arr+N);
        int count=0;
        for(int i=0;i<N-2;i++)
        {
            int j=i+1;
            int h=N-1;
            while(j<h)
            {
                 int sum=Arr[i]+Arr[j]+Arr[h];
                 if(sum>x)h--;
                 else{
                     count+=(h-j);
                     j++;
                 }
            }
         
        }
        return count;
    }
    int countTriplets(int Arr[], int N, int L, int R) {
        // code here
       int ans=count(Arr,N,R)-count(Arr,N,L-1);
       return ans;
    }
};
