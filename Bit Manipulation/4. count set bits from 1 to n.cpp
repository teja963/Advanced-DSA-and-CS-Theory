/*
 0- 0 0 0 0
 1- 0 0 0 1
 2- 0 0 1 0
 3- 0 0 1 1
 4- 0 1 0 0                 highest power of 2 is 8 which is 2 ^ 3   //x is 3
 5- 0 1 0 1                 from 0 to 7 no.of set bits is 8/2+8/2+8/2 
 6- 0 1 1 0                                               4*x= 2^(x-1)*x
 7- 0 1 1 1
 ------------------------------------------------
 8- 1 0 0 0                 from 8 to 11 no.of msb is n-2^x+1
 9- 1 0 0 1                 for remaining lsb is x so, recursively call countsetbits(n-2^x)
10- 1 0 1 0
11- 1 0 1 1
 
*/
class Solution{
    public:
      int largest_pow(int n)
      {
          int i=0;
          while((1<<i)<=n)i++;
          return i-1;
      }
    int countSetBits(int n)
    {
        // Your logic here
        if(n==0)return 0;
        int x=largest_pow(n);
        int ans=x*(1<<(x-1))+n-(1<<x)+1+countSetBits(n-(1<<x));  //x*2^(x-1)+(n-2^(x)+1)+solve(n-2^x);
        return ans;
        
    }
    
//Time Complexity: O(log n)
