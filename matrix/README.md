# Matrix Problems Approach techniques 
  <pre>
  * 1.Searching Methods in row and col sorted:O(m+n)
   <a href="https://github.com/teja963/DSA_All_Models/blob/master/matrix/2.%20Search.cpp">2. From low to high</a>
   |
   |_ _ _ _ 
   |_ _ _ _
   |
   |
   <a href="https://github.com/teja963/DSA_All_Models/blob/master/matrix/6.%20Search%20in%20a%20row-column%20sorted%20matrix.cpp">6. From high to low</a>
             |
   _ _ _ _ _ |
             |
   _ _ _ _ _ |
             |
             
   * 2. Median in row and col sorted: O(32*r*log(c))
   <a href="https://github.com/teja963/DSA_All_Models/blob/master/matrix/3.%20median.cpp">Finding median</a>
     1. First find the min and max element in single traversal
     2. for r*c matrix order the median is (r*c+1)/2 if it is arranged in sorted order, so the desired place is (r*c+1)/2
     3. while(min<max):                   //Binary approach
           mid=(min+max)/2;
        Count the elements which are smaller than mid by upper_bound syntax in log(c)
     4. make a count of elements 
         if(place<desired)min=mid+1
         else max=mid
   </pre>
