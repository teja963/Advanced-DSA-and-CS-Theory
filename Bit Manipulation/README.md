# Logic problems
  4. O(log n)
  <a href="https://github.com/teja963/DSA_All_Models/blob/master/Bit%20Manipulation/4_count_set_bits_1_to_n.cpp">Count set bits from 1 to n</a>
  <p>
    0- 0 0 0 0<br>
    1- 0 0 0 1<br>
    2- 0 0 1 0<br>
    3- 0 0 1 1<br>
    4- 0 1 0 0<br> 
    5- 0 1 0 1<br> 
    6- 0 1 1 0<br> 
    7- 0 1 1 1<br>
    8- 1 0 0 0<br> 
    9- 1 0 0 1<br> 
   10- 1 0 1 0<br>
   11- 1 0 1 1<br>
              <p>highest power of 2 is 8 which is 2 ^ 3   x is 3
              from 0 to 7 no.of set bits is 8/2+8/2+8/2<br>
                                             4*x= 2^(x-1)*x       pattern bits counting<br>
              from 8 to 11 no.of msb is n-2^x+1                   msg bits counting<br>
              for remaining lsb is x so, recursively call countsetbits(n-2^x)    recursively dng process</p>
  </p>
 
     Ans: i*2^(i-1) + n-2^i+1 + count(n-2^i); 
     
  5. <a href="https://github.com/teja963/DSA_All_Models/blob/master/Bit%20Manipulation/5_find_whether_no_is_power_of_2.cpp">Check given number is power of 2 or not</a>
       <pre>
       Ans: 1. When we write in binary of that number then it contain only one 1<br>
            2. X&(X-1)==0     x is +ve number
        </pre><br>
# NOTE POINTS:
   <pre>
  * Built in functions:
      b._Find_first();          Returns the position of 1st set bit
      b.__builtin_popcount();   Returns the number of 1's in that number
      b.to_string();            Convert to string
      b.to_ulong();             Convert to decimal
     
  * Signed and Unsigned:
   The rel is signed number -x = Unsigned number 2^n - x
                          ~x=-x-1
                         Min                 Max       
      1.Signed num     -2^(n-1)              2^(n-1)-1
      2.UnSigned num      0                  2^(n-1)-1
    </pre>
  
			      
  
  
  
  
  
