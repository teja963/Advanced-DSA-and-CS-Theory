# String Applications
  <pre>
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/String/4.%20Remove%20kth%20digits%20from%20number.cpp">Remove K digits from given string to make smaller number</a></b>
    Cases:
     1. Pop the elements in non-ascending order using string as efficient instead of stack
     2. Remove the leading zeros if it contains
     3. If string is in ascending order, then 1st case can't work to overcome that, pop last elements 
        for smaller number
        
   <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/String/13.%20Next%20permutation.cpp">Next Permuation</a></b>
          <img alt="Gif" width="550" height="200" src="https://github.com/teja963/DSA_All_Models/blob/master/String/images/31_Next_Permutation.gif">
          
   <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/String/18.%20Vowels%20of%20all%20substrings.cpp">Vowels of all substrings</a></b>                             i
      eg: abea                           a  b  e  a
          a ab abe abea                  if ith char is vowel then to its left it repeat (i+1) times
          b be bea                       to its right it repeat in (n-i) times  
          e ea
          a
          
  </pre>
# Note
  <pre>
  string matching usage
  s.find(tmp)!=string::npos     //string::npos is end of string
  
    Integer to roman just make array of 
    units-------|
    tens--------|_ _ _  add digits place of all the 4 arrays
    hundreds----|
    thousands---|
  </pre>
