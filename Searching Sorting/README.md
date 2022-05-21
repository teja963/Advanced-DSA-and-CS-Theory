# Applications
  <pre>
  <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Sliding%20Window/4.%20Count%20anagrams.cpp">Repeated and missing element in O(N)</a></b>
  Traverse the array. While traversing, use the absolute value of every element as an index -  abs(arr[i])-1
  and make the value at this index as negative to mark it visited. If something is already
  marked negative then this is the repeating element.
  To find missing, traverse the array again and look for a positive value.
  
  <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Searching%20Sorting/6.%20Majority%20element.cpp">Majority element in O(N)</a></b>
   It means the element is repeated morethan N/2 times so half of the array is occupied
   by that element only. Anykind of arrangement we will that element in atmost 1 
   
  <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Searching%20Sorting/13.%20count%20num%20of%20subarray%20with%20given%20sum.cpp">Subarray with given sum</a></b>
   The basic idea of using map is 0+sum=sum
   any element added to 0(subarray with zero sum) gives the same sum
   So we are tracking of sum which is repeated, that means it contain zero sum
   
  <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Searching%20Sorting/14.%20missing%20num%20ap.cpp">Missing number in A.P</a></b>
   Basic:
      common diff=0 and it satisifying that diff(B-A)%C==0 and divisiblity(B-A)/C>=0
      
  <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Searching%20Sorting/15.%20atleast%20trailing%20zeros.cpp">Atleast N trailing zeros in O(log N)</a></b>
   log n means binary search with l=0 and h= 5*n
   we will check the least possible number with N trailing zeros,
   by count number of zeros of that fact number 
   
  <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Searching%20Sorting/17.%20merging%20overlap%20intervals.cpp">Merging Overlap intervals</a></b>  and <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Searching%20Sorting/18.%20Merging%20overlap%20intervals%202.cpp">Merging Overlap intervals 2</a></b>
     
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
         
  <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Searching%20Sorting/20.%20Min%20sum.cpp">Min sum</a></b>
   Usage of regular expression for removing leading zeros
   <b>
   const regex pattern("^0+(?!$)");  //^0 for removing leading zeros , (?!) for non-neg , $ for ending of string
                                        Don't give spaces for expression
   ans= regex_replace(ans, pattern ,"");
   </b>
  <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Searching%20Sorting/22.%20count%20triplet%20with%20given%20range.cpp">Count triplets with given range</a></b>
    
        ------------------------------
                 a        b                   find no.of triplets less than b and a-1
       ----------         |
      ---------------------
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
  find pattern for swapping to which element
   </pre>
# STL
  <pre>
  The lower_bound() method in C++ is used to return an iterator pointing to the first element
  in the range [first, last) which has a value not less than val. This means that the function 
  returns the index of the next smallest number just greater than or equal to that number.
  
  <b>set< int > s</b>it store elements in the sorted order usage for searching elements
   <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Searching%20Sorting/28.%20Smaller%20on%20left.cpp">Smaller left</a></b>: So we will check the lowerbound of that element in log n time
   <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Searching%20Sorting/31.%20Farthest%20number.cpp">Farthest number</a></b>:Just search only min elements in the right side in log n time
   <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Searching%20Sorting/32.%20Max%20index%20difference.cpp">Max index difference</a></b>: Just search elements which are Arr[i] <= Arr[j] by making parralel view
   Make a parallel array if you want to search for greater elements instead of searching all logic 
  
  pair< vector < int > ::iterator1, vector < int >::iterator2>p;
  p = equal_range(v.begin(), v.end(), x);
  
  if we want to search array in 2nd array
  find(ans.begin(),ans.end(),v)!=ans.end()
  
  accumulate(a,a+n,sum) //find sum of all elements within range, we can modify it
  stable_sort(a, a+n) //Inbuilt fun is there
  </pre>
  
# Efficient Approach
  <pre>
  <b><a href="https://github.com/teja963/Advanced-DSA/tree/master/Searching%20Sorting">Minimum number in sorted array</a></b>
  use binary search and check mid and high conditions
  </pre>
