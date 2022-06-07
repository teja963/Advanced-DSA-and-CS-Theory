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
  
  <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/BackTracking/6.%20Array%20Partition.cpp">Array Partition</a></b>
  to get absolute diff between any pair of elements we need to sort
  check start and start + k -1, is basic condition
  if it satisifies go to fun(start+1)
  
  <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/BackTracking/9.%20Largest%20number%20in%20k%20swaps.cpp">Largest num in k swaps</a></b>
  find all possibilities (by decr k) and get the max, for every combination recursively 
  </pre>
# NOTE
  <pre>
  <b><a href="https://practice.geeksforgeeks.org/problems/help-the-old-man3848/1">Question</a></b>: <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/BackTracking/8.%20Help%20the%20odd%20man%20out.cpp">Help the odd man out</a></b>
  </pre>
