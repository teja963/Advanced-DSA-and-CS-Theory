# Applications
  <pre>
  <b><a href="https://github.com/teja963/Advanced-DSA-and-CS-Theory/blob/master/Searching%20Sorting/15.%20atleast%20trailing%20zeros.cpp">Atleast N trailing zeros in O(log N)</a></b>
   log n means binary search with l = 0 and h = 5*n
   high = mid
   low = mid+1(atleast)
   so return low
   
  <b><a href="https://github.com/teja963/Advanced-DSA-and-CS-Theory/blob/master/Searching%20Sorting/17.%20merging%20overlap%20intervals.cpp">Merging Overlap intervals</a></b>  and <b><a href="https://github.com/teja963/Advanced-DSA-and-CS-Theory/blob/master/Searching%20Sorting/18.%20Merging%20overlap%20intervals%202.cpp">Merging Overlap intervals 2</a></b>
     
      start  end  //initalize
     Q1. [[1,2],[1,3],[2,5]]     update end if end >= intervals[i][0]  //merging intervals case
     Q2. 
         1. push intervals less than range
         2. for merging intervals into single interval 
             within this range compare each element and update( initialzing start,end = newInterval)
             intervals[i][0] <= newInterval[1]:
             
		                         [1,5] - newInterval
		      
		      [[1,2],[1,3],[2,5]]
	       start   1      1     1 
	       end     2      3     5
	       
	 3. push intervals greater than given range
         
**<a href="https://practice.geeksforgeeks.org/problems/smallest-absolute-difference4320/1#"> Que</a>**                              **<b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Searching%20Sorting/27.%20Smallest%20Absolute%20difference.cpp">Smallest absolute difference</a></b>**
  	After sorting low = min_absolute diff, high = max_absolute diff in O(N)
  	while low < high:					<b>When array is in sorted order we can find the no. of absolute diff
  	  	if count_pairs(mid) < k:			abs(a[j] - a[i]) <= mid in O(N log N)
  	  		low = mid + 1
  	  	else:							for i = 0 to n:
  	  		high = mid						count += upper_bound(a+i, a+n, a[i]+mid) - (a+i+1)
  	  							</b>	
  	  			  		
  
  <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Searching%20Sorting/29.%20Min%20Swaps%20to%20sort.cpp">Minimum swaps to sort</a></b>
  make parallel view of input and result
  find pattern for swapping to which element by storing indexs
   </pre>
   
# STL
  <pre>
   <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Searching%20Sorting/32.%20Max%20index%20difference.cpp">Max index difference</a></b>: Just search elements which are Arr[i] <= Arr[j] by making parralel view
   Make a parallel array if you want to search for greater elements instead of searching all logic 
 
  accumulate(a,a+n,sum) //find sum of all elements within range, we can modify it
  stable_sort(a, a+n) //Inbuilt fun is there
  </pre>
  
# Binary search Approach
  <pre>
  <b><a href="https://github.com/teja963/Advanced-DSA/tree/master/Searching%20Sorting">Minimum number in sorted array</a></b>
  use binary search and check mid and high conditions
  
  <b><a href="https://github.com/teja963/Advanced-DSA-and-CS-Theory/blob/master/Searching%20Sorting/26.%20Koko%20Eating%20Bananas.cpp">Koko eating bananas</a></b>  <b><a href="https://github.com/teja963/Advanced-DSA-and-CS-Theory/blob/master/Searching%20Sorting/25.Split%20array%20largest%20sum.cpp">Split array largest sum</a></b>
  </pre>
