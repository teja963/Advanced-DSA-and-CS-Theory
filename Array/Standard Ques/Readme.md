# Approaches
<pre>
 <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Array/4.%20Sort%20012.cpp">Sort 012 in O(1)</a></b> or <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Array/24.%203%20way%20partitioning%20around%20given%20value.cpp">3 way partitioning</a></b>
   Just traverse through the each and every element 
           i                                    
   l_ _ _ _ _ _ _ _ _ h               if current element is 0 swap (l++,i)
                                      if current element is 1 continue
                                      if current element is 2 swap (i,h--)
                                      
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Array/7.%20Cyclic%20rotate.cpp">Cyclic rotate in O(n)</a></b>
   By using reverse function do  : a = [5 6 7 1 2 3 4]     k=3; <b>Imp condition</b>: k may be any value so use k %= n; 
      reverse entire array:      : a = [4 3 2 1 7 6 5]
      reverse starting k elements: a = [1 2 3 4 7 6 5]
      reverse remaining elements : a = [1 2 3 4 5 6 7]
      
  <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Array/11.%20Best%20time%20to%20buy%20sell%20stock.cpp">Best Time to buy and sell stock</a></b>   and  <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Array/11.%20Best%20time%20to%20buy%20sell%20stock.cpp" >Maximum difference between increasing element</a></b>
  1. Update min each time 
  2. Calculate max diff of elements          In this case max diff = 0(if decreasing order 9 8 7 7 6), so return -1 
</pre>
