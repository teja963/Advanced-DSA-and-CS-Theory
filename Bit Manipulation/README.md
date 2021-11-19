# Logic problems
  <pre>
   <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Bit%20Manipulation/4.%20count%20set%20bits%20from%201%20to%20n.cpp">Count set bits from 1 to n O(log n )</a></b>
	    0- 0 0 0 0
	    1- 0 0 0 1
	    2- 0 0 1 0
	    3- 0 0 1 1
	    4- 0 1 0 0 
	    5- 0 1 0 1 
	    6- 0 1 1 0 
	    7- 0 1 1 1
	    8- 1 0 0 0 
	    9- 1 0 0 1 
	   10- 1 0 1 0
	   11- 1 0 1 1
		      highest power of 2 is 8 which is 2 ^ 3   x is 3
		      from 0 to 7 no.of set bits is 8/2+8/2+8/2
		                                     4*x= 2^(x-1)*x       pattern bits counting
		      from 8 to 11 no.of msb is n-2^x+1                   msg bits counting
		      for remaining lsb is x so, recursively call countsetbits(n-2^x)    recursively dng process
	  
 
       Ans: i*2^(i-1) + n-2^i+1 + count(n-2^i); 
     
   <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Bit%20Manipulation/5.%20find%20whether%20no%20is%20power%20of%202.cpp">Check given number is power of 2 or not</a></b>
     Ans: 1. When we write in binary of that number then it contain only one 1
          2. X&(X-1)==0     x is +ve number
  
   <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Bit%20Manipulation/9.%20Swap%20all%20even%20and%20odd%20bits.cpp">Swapping of all odd and even in O(1)</a></b>
         get all the even one's by n&0xAAAAAAAA;
         get all the odd one's by n&0x55555555;
         shift the positions and add
        
   <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Bit%20Manipulation/8.%20divide%202%20integers%20wihtout%20mul%20div%20modoperation.cpp">Divide 2 integer wihtout any divisio, multiplication, mod O(log a)</a></b>
	       we can know that every number is can be written as power of 2
	       a = 10    b = 3    ans= 3
	       1 0 1 0     tmp=0
         index:3 2 1 0                                            3*X<= 10 
                                                                  3*2<=10 crct     ans+=2;
          traverse bits of dividend                               6+ 3*1<=10 crct     ans+=1;
          if tmp+ (divisor<<i) <= dividend:    
              tmp+=(divisor<<i);
              ans|=(1LL<<i); 
   </pre> 
    
# NOTE POINTS:
  <pre>  
  * Built in functions:
      b._Find_first();          Returns the position of 1st set bit
      b.__builtin_popcount();   Returns the number of 1's in that number
      b.to_string();            Convert to string
      b.to_ulong();             Convert to decimal
     
  * Signed and Unsigned:
   The rel between signed and unsigned is signed number -x = Unsigned number 2^n - x
                          ~x=-x-1
                         Min                 Max       
      1.Signed num     -2^(n-1)              2^(n-1)-1
      2.UnSigned num      0                  2^(n-1)-1
    
   </pre>
  
  
  
  
  
