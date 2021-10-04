# Logic problems
  1. O(log n)
  <a href="https://github.com/teja963/DSA_All_Models/blob/master/Bit%20Manipulation/4_count_set_bits_1_to_n.cpp">Count set bits 1 to n</a>
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
              <p>from 0 to 7 no.of set bits is 8/2+8/2+8/2
                                             4*x= 2^(x-1)*x       pattern bits counting
              from 8 to 11 no.of msb is n-2^x+1                   msg bits counting
              for remaining lsb is x so, recursively call countsetbits(n-2^x)    recursively dng process</p>
  </p>
 
     Ans: i*2^(i-1) + n-2^i+1 + count(n-2^i); 
