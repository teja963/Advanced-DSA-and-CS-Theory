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
     Ans: 
          1. When we write in binary of that number then it contain only one 1
          2. X&(X-1)==0     x is +ve number
  
   **<b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Bit%20Manipulation/9.%20Swap%20all%20even%20and%20odd%20bits.cpp">Swapping of all odd and even in O(1)</a></b>**
         get all the even one's by n&0xAAAAAAAA;
         get all the odd one's by n&0x55555555;
         shift the positions and add
    
   **<b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Bit%20Manipulation/8.%20divide%202%20integers%20wihtout%20mul%20div%20modoperation.cpp">Divide 2 integer wihtout any division, multiplication, mod O(log a)</a></b>**
	       we can know that every number is can be written as power of 2
	       a = 10    b = 3    ans= 3
	       1 0 1 0     tmp=0
         index:3 2 1 0                                            3*X<= 10 
                                                                  3*2<=10 crct     ans+=2;
                                                                  6+ 3*1<=10 crct     ans+=1;
       traverse bits of dividend
       if tmp+ (divisor<< i)<= dividend: 
              tmp + =(divisor<< i)
              ans | = 1LL<< i                                   
                
                
   <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Bit%20Manipulation/11.%20single%20number%202.cpp">Single number 2</a></b>
      find number which is repeated only once, all the numbers repeated 3
      one = 0, two =0
      one=(one^x)&(~two)
      two=(two^x)&(~one)
     
      return one;
      
   <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Bit%20Manipulation/12.%20Single%20Number%203.cpp">Single Number 3</a></b>
      [1, 2, 1, 3, 2, 5]    find xor of all = tmp
      for geting last set bit of tmp = tmp & -tmp   //for grouping purpose (01)
                          00        10
      1:  001          -------------------
      2:  000             1     |   2
      3:  011             5     |   3
      5:  101                   |
      
      now traverse again the array based on grouping condition split(tmp & n)
        for (auto n:nums):
            if (n & tmp):
               x ^= n
            else y ^= n
            
        
      
   <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Bit%20Manipulation/Gray%20Code/12.%20Gray%20Code.cpp">Gray Code</a></b> and 2nd method <a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Bit%20Manipulation/Gray%20Code/12.%20Gray%20Code.py">Py- Gray Code</a></b>
    observe the pattern and do recursively
    1- 0,1
    2- 00,01  ,11,10
    3- 000,001,011,010  , 110,111,101,100
    
    list = i ^ i >> 1 for i in range(1<< n)
    
   <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Bit%20Manipulation/13.%20Maximum%20product%20of%20words%20length.cpp">Max product of words length</a></b>
      
       Input: words = ["abcw","baz","foo","bar","xtfn","abcdef"]
	//bitmap  = [num1,  num2, num3 , num4 , num5 , num6]  -- val |= (1<<(ch-'a'))
       Output: 16
     
       Use bitmap for checking common charcters for 
       and check (bitmap[i] & bitmap[j] == 0) ,if common characters present it won't be zero
       
   <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Bit%20Manipulation/14.%20Counting%20Bits.cpp">Couting bits</a></b>
   	we need to find no.of bits in O(1)
   	1. make use of previously calculated thing ans[i] = ans[i / 2]
   	2. Even and odd status helps us update, finally ans[i] = ans[i / 2] + i % 2
   	
   
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
      
  * To get last set bit for X(number)  ---> X = X & -X;
    
   </pre>
  
  
  
  
  
