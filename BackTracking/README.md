# BackTracking Overview
  <pre>
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/BackTracking/3.%20generate%20parenthesis.cpp">Generate parenthesis</a></b>
  for n we get (2n C n)/(n+1)
  we will make open(n) and close(0) parameter
  if(open)call(open-1,close+1)
  if(close)call(open,close-1)
  
  <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/BackTracking/4.%20Palindrome%20Partitioning.cpp">Palindrome Partitioning</a></b>
   aab     (0)ab   (0)b
 0:  (a ->   a  ->   b)   -tmp_ans
 1: (aa->b) ab            -tmp_ans        aa is palindrome so it will go into fun and get b
 2:  aab                  -tmp_ans
   fun(s):
	   if s.size()==0:
	      push ans;
	      return;
	      
	   for i=0 to n:
	      string t=s.substr(0,i+1);
	      if(palindrome):
	         push tmp_ans;
	         fun(s.substr(i+1));  //it will call remaining char 
	         pop tmp_ans;         //backtracking
		          
    
  </pre>
# NOTE
  <pre>
  write logic in step tables with proper index format and implment
  </pre>
