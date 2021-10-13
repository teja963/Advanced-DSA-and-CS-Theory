/*
N = a + (a+1) + (a+2) + .. + (a+L) 
N = (L+1)*a + (L*(L+1))/2 
a = (N- L*(L+1)/2)/(L+1) 

  We substitute the values of L starting from 1 till L*(L+1)/2 < N 
  If we get 'a' as a natural number then the solution should be counted.

*/
class Solution {
  public:
    int getCount(int N) {
        // code here
        int c=0,i;
        for(i=1;i*(i+1)<N*2;i++){
            double a=(double)N/(i+1)-(double)i/2;
            if(a-(int)a==0.0)c++;
        }
        return c;
        
    }
};
