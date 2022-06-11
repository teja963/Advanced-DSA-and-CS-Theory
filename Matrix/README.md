# Matrix Problems Approach techniques 
  <pre>
  <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Matrix/2.%20Search%20in%20row%20and%20column%20sorted%20.cpp">Search in row and column sorted in O(log (M*N))</a></b>
    Use Binary Search in Row and column simultaneously
    
     while i < m and n >= 0:
        element = top right corner
        if equal : return true
        else if (element < target): i++
        else n--
             
  <b>Median in row and col sorted: O(32*r*log(c))</b>
   <a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Matrix/3.%20median.cpp">Finding median</a> and <a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Matrix/*9.%20kth%20smallest%20in%20matrix.cpp">Kth smallest in matrix multiplication</a></b>
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
      
   <a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Matrix/11.%20Find%20Rectangle%20with%20corner%20as%201.cpp">Rectangle with corner as 1</a></b>
   Choose two rows with brute force method and traverse column
   now check their corresponding matrix[row1][column] and matrxi[row2][column] is 1
   
  <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Matrix/14.%20Filp%20columns%20for%20max%20no.of%20equal%20rows.cpp">Filp columns for max no.of equal rows</a></b>
  	use map for storing freq
  	eg: 1 0 0 0 0
  	    0 1 1 1 1
  	    0 1 1 1 1
  	    if after fliping k columns the rows values r 0's and 1's means
  	    1's - for row x we need to XOR with its compliment
  	    0's - we need to xor with same
    
   </pre> 
      
