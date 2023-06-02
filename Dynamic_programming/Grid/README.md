# Approach
	<pre>
  <a href="https://github.com/teja963/Advanced-DSA-and-CS-Theory/blob/master/Dynamic_programming/Grid/cheery_pickup.cpp">Cheery pickup</a>
   <b>key points:</b>
   going from top to bottom or bottom to top is same
   consider bottom starting simultaneously
   r1 + c1 = r2 + c2 
   <b>cases</b>
   1. Both are at same point pick up one
   2. Both are at different points choose both
   3. choose next all possible move and take max add to the previous picup
   4. store the values in 3D dp
   </pre>
