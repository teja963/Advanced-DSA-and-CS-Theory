# Approaches
<pre>
 <b><a href="https://github.com/teja963/Advanced-DSA-and-CS-Theory/blob/master/Array/Easy%20Ques/Sort_012.cpp">Sort 012 in O(1)</a></b>
   Just traverse through the each and every element 
           i                                    
   l_ _ _ _ _ _ _ _ _ h 
                                                                     
 <b><a href="https://github.com/teja963/Advanced-DSA-and-CS-Theory/blob/master/Array/Easy%20Ques/Cyclic_rotate.cpp">Cyclic rotate in O(n)</a></b>
   By using reverse function do     <b>Imp condition</b>: k may be any value so use k %= n; 
      reverse entire array
      reverse starting k elements
      reverse remaining elements
      
 <b><a href="https://github.com/teja963/Advanced-DSA-and-CS-Theory/blob/master/Array/Easy%20Ques/Best_time_to_buy_sell_stock.cpp">Best Time to buy and sell stock and Maximum difference between increasing element</a></b>
  1. Update min each time 
  2. Calculate max diff of elements          In this case max diff = 0(if decreasing order 9 8 7 7 6), so return -1
  
 <b><a href="https://github.com/teja963/Advanced-DSA-and-CS-Theory/blob/master/Array/Easy%20Ques/Sorted_subsequence_of_size_of_three.cpp">Sorted subsequence of size 3</a></b>
 make left_min array
      right_max array
      traverse through this condition left < arr[i] < right 
</pre>

# Pointer Approach
<pre>
 <b><a href="https://github.com/teja963/Advanced-DSA-and-CS-Theory/blob/master/Array/Easy%20Ques/Common_elements_three_arrays.cpp">Common elements in 3 arrays</b></a>:-avoid duplicate cases
 <b><a href="https://github.com/teja963/Advanced-DSA-and-CS-Theory/blob/master/Array/Easy%20Ques/Triplet_sum.cpp">Triplet sum</a></b> :Sort it
 <b><a href="https://github.com/teja963/Advanced-DSA-and-CS-Theory/blob/master/Array/Easy%20Ques/Four_sum.cpp">Four sum</a></b>: Sort it
</pre>

# Standard
<pre>
  <b><a href="https://github.com/teja963/Advanced-DSA-and-CS-Theory/blob/master/Array/Easy%20Ques/kadanes_algo.cpp">Kadanes Algorithm</a></b>
   Make a parallel array as ans array then update as:
        sum=0   ans = INT_MIN
        a: [ 1 -5  4  9  8 -10 6]
      sum: [ 1 -4  4  13 21 11 17]
      ans: [ 1  1  4  13 21 21 21]
</pre>
