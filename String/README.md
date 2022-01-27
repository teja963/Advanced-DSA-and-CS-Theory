# String Applications
  <pre>
  <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/String/9.%20Max%20difference%20of%20zeros%20and%201s.cpp">Maximum diff of zeros and ones</a></b>
    1 1 0 0 0 0 1 0 0 0 1
        |_ _ _ _ _ _ _ |
        When we get zeros and ones prob convert 1 -> -1
                                                0 ->  1
                                                
        Apply Kadane's algo for finding max subarray
    
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
   <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/String/25.%20Next%20Highest%20Palindrome.cpp">Next Highest Palindrome in O(N Log N)</a></b>
      i/p: 3 5 4 5 3
      o/p: 5 3 4 3 5
        if frst_half part is highest than actual frst_half then it is to get next highest
        use next_permutation of that actual frst_half
        
   <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/String/28.%20Longest%20common%20Prefix%20in%20array.cpp">Longest common prefix</a></b>
     prefix = a[0];
     while traversing array of strings update prefix
     
   <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Sliding%20Window/4.%20Count%20anagrams.cpp">Count Anagram</a></b> or <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/String/29.Permutation%20in%20String.cpp">Permuation in string</a></b>
    Same concept application of anagrams
    If s1's pemutation is present in s2, if permutations equal means sort(s1) == sort(s2)
    In Simple way without sorting use map m1 == m2, then permutation of s1 is present in s2
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
    
    while implementing backtracking right logic and use recursion effectively
  </pre>
