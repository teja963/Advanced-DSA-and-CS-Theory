# Matrix Problems Approach techniques 
  <pre>
  <b>Median in row and col sorted: O(32*r*log(c))</b>
   <a href="https://github.com/teja963/Advanced-DSA-and-CS-Theory/blob/master/Matrix/3.%20median.cpp">Finding median</a> and <a href="https://github.com/teja963/Advanced-DSA-and-CS-Theory/blob/master/Matrix/4.%20kth%20smallest%20in%20matrix%20multiplication.cpp">Kth smallest in matrix multiplication</a></b>: Need to update
    1. First find the min and max element in single traversal
    2. for r*c matrix order the median is (r*c+1)/2 if it is arranged in sorted order, so the desired place is (r*c+1)/2
    3. while min < max:
          place =0;    // for counting 
        mid=(min+max)/2;
        Count the number of elements smaller than mid by using upperbound which takes log(c) time for each row
         count+= upper_bound(matrix[i].begin(),matrix[i].end(), mid) -matrix[i].begin()
       if place < desired: min = mid + 1;
       else max = mid
       
       
   Method 2:
         1   2   3
      1  1   2   3
      2  2   4   6
      3  3   6   9
      
        1 2 2 3 3 4 6 6 9
        for i=1 to m: count+=min(mid/i,n)
  
  <b><a href="https://github.com/teja963/Advanced-DSA-and-CS-Theory/blob/master/Matrix/8.%20Common%20elements%20all%20rows.cpp">Common elements in all rows</a></b>: Take care of duplicate elements case
  <b><a href="https://github.com/teja963/Advanced-DSA-and-CS-Theory/blob/master/Matrix/11.%20Find%20Rectangle%20with%20corner%20as%201.cpp">Rectangle with corner as 1</a></b>
   Choose two rows with brute force method and traverse column
   now check their corresponding matrix[row1][column] and matrxi[row2][column] is 1
   
  <b><a href="https://github.com/teja963/Advanced-DSA-and-CS-Theory/blob/master/Matrix/13.%20Compute%20Matrix.cpp">Compute matrix</a></b>See the pattern(reverse dynamic)
  <b><a href="https://github.com/teja963/Advanced-DSA-and-CS-Theory/blob/master/Matrix/14.%20Filp%20columns%20for%20max%20no.of%20equal%20rows.cpp">Filp columns for max no.of equal rows</a></b>
   After fliping it becomes equal rows means:- its compliment right
   use string(for row elements)keep tracking those freq and its compliment
    
   </pre> 
      
# NOTE
  <pre>
   <b>Median in unsorted array in O(n)</b>: nth_element(iterator_start, iterator_rearrange_position, iterator_end)
  </pre>
