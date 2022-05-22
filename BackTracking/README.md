# BackTracking Overview
  <pre>
  **<b><a href="https://github.com/teja963/DSA_All_Models/blob/master/BackTracking/3.%20generate%20parenthesis.cpp">Generate parenthesis</a></b>**
  for n we get (2n C n)/(n+1)
  we will make open(n) and close(0) parameter
  if(open)call(open-1, close+1)
  if(close)call(open, close-1)
   
  <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/BackTracking/4.%20Palindrome%20Partitioning.cpp">Palindrome Partitioning</a></b>
   aab     (0)ab   (0)b
 0:  (a ->   a  ->   b)   -tmp_ans
 1: (aa->b) ab            -tmp_ans        aa is palindrome so it will go into fun and get b
 2:  aab                  -tmp_ans
   fun(s):
	   base is s.size == 0, push
	   for i = 0 to n:
	   	tmp = s.substr(0 ,i + 1) we will get (a, aa, aab)
	   	if palindrome :
	   	    push()
	   		fun(s.substr(i+1))
	   		pop
	   		
  <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/BackTracking/7.%20Permuation%20with%20spaces.cpp">Permuation with spaces</a></b>
  just create all possibilites with space include or not condition
  for edge case(last character) push it without space 
  </pre>
# NOTE
  <pre>
  
  </pre>
