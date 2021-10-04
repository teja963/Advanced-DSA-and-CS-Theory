# Logic problems
  1. O(log n)
  <a href="https://github.com/teja963/DSA_All_Models/blob/master/Bit%20Manipulation/4_count_set_bits_1_to_n.cpp">Count set bits 1 to n</a>
  
   0- 0 0 0 0<br>
   1- 0 0 0 1<br>
   2- 0 0 1 0<br>
   3- 0 0 1 1<br>
   4- 0 1 0 0                 highest power of 2 is 8 which is 2 ^ 3   //x is 3<br>
   5- 0 1 0 1                 from 0 to 7 no.of set bits is 8/2+8/2+8/2 <br>
   6- 0 1 1 0                                               4*x= 2^(x-1)*x       //pattern bits counting<br>
   7- 0 1 1 1
   8- 1 0 0 0                 from 8 to 11 no.of msb is n-2^x+1                  //msg bits counting<br>
   9- 1 0 0 1                 for remaining lsb is x so, recursively call countsetbits(n-2^x)    //recursively dng process<br>
  10- 1 0 1 0<br>
  11- 1 0 1 1<br>
 
     Ans: i*2^(i-1) + n-2^i+1 + count(n-2^i); 
