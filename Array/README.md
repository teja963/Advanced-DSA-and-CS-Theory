# Efficient Approaches
  <pre>
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Array/19.%20Buying%20selling%20share%20atmost%20twice.cpp">Buying and selling at most twice</a></b>: Need to update
     Initializing variable valley-peak approach
	   
		                80
		               /
		30            /
	       /  \          25
	      /    15       /
	     /      \      /
	    2        10   /
		       \ /
		        8 
  
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Array/25.%20Min%20swaps%20required%20k%20elements%20together.cpp">Min swaps required to bring K elements together</a></b>
  
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Array/37.%20Max%20sum%20path.cpp">Maximum sum path</a></b>
        arr1: i sum1
        arr2: j sum2
                 if arr1[i] < arr2[j]: s1 += arr1[i++]
                 if arr2[j] < arr1[i]: s2 += arr2[j++]
                 if both elements are equal then update or shifting from 1 to another  
      <img alt="max sum path" width="500" height="200" src="https://github.com/teja963/DSA_All_Models/blob/master/Array/images/download.png">
  
  <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Array/41.%20Max%20value.cpp">Max value</a></b>: (A[i] - i) - (A[j] - j)
  Treat like max = A[i] - i  Traverse single time find max and min at a time
  		min = A[j] - j 
  			 
  **<b>Remark need to go log n</b>**<b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Array/44.%20Sum%20of%20middle%20elements%20of%202%20sorted.cpp">Sum of middle elements of 2 sorted array</a></b>  Extension:<b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Array/54.%20Median%20of%20sorted%20array%20different%20sizes.cpp">Median of 2 sorted Array of different size</a></b>
       using count method find n/2 element if odd 
       find n/2- 1 and n/2 if even bcz array sorted
       need to traverse only (n1+n2)/2 elements 

  <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Array/50.%20k-difference%20pairs.cpp">K difference pairs</a></b>
  	In this k is >= 0, so always need to check (x + k) present or not only unique pairs means
  	no need to consider duplicate elements so use map or set
  	and check k = 0 case, [1, 1, 1, 1] only 1 single pair so k == 0 and x.second > 1: ans++	
  	
  <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Array/66.%20First%20Missing%20positive.cpp">First Missing positive</a></b>: Keep elements in their respective index 
  </pre>

# XOR Concept
  <pre>
  <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Array/48.%20Pairs%20with%20given%20xor.cpp">Pair with given xor in O(n)</a></b>
  	Need to Update it
  <b><a href="https://github.com/teja963/Advanced-DSA-and-CS-Theory/blob/master/Array/39.%20Single%20num.cpp">Single num</a></b>
  </pre> 
# Subarray concept
  <pre>
  <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Array/14.%20%20Subarray%20with%20sum%20zero.cpp">Subarray with sum zero</a></b>  Extension:<b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Array/33.%20Subarray%20with%20equal%200s%20and%201s.cpp">Subarray with equal no.of 0's and 1's</a></b>
  	basic concept 0 + sum = sum - 0 = sum,           Just need to convert 0 to -1 and 
  	so adding any value to zero gives that result    and apply base concept problem
  	so need to keep track of previous sums
    for that we need map approach
   
  <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Array/46.%20Subarray%20sum%20divisble%20by%20K.cpp">Subarray sum divisible by k</a></b>   Extension:<b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Array/65.%20longest%20subarray%20with%20sum%20divisible%20by%20k.cpp">Longest subarray with sum divisible by k</a></b>
  	divisible means remainder 0                                                Same concept just need to store index and update it
	sum += arr[i]                                                              m[0] = -1 // Imp
  	rem = ((sum % k) + n)) % k; //remainder can be neg also to avoid that
  	apply above problem base logic
  	
  <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Array/63.%20Non-decreasing%20array.cpp">Non Decreasing array</a></b>
  	Update not satisfying element based on prev elements value, only one time, if more than that return false
  	
  <b><a href="https://github.com/teja963/Advanced-DSA-and-CS-Theory/blob/master/Array/16.%20Max%20product%20subarray.cpp">Max product subarray</a></b>
  Use cases for -ve and +ve elements
  </pre>
  
# BASIC
  <pre>
  <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Array/21.%20Triplet%20sum.cpp">Triplet sum</a></b> <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Array/56.%20Four%20elements.cpp">Four elements</a></b>
  	sort the array
  </pre> 
  
# Map
 <pre>
  <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Array/17.%20longest%20consecutive%20sequence.cpp">Longest consecutive sequence</a></b>: Need to update
  <b><a href="https://github.com/teja963/Advanced-DSA-and-CS-Theory/blob/master/Array/50.%20k-difference%20pairs.cpp">K diff pairs</a></b>: Need to update
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Array/12.%20Count%20pairs%20with%20given%20sum.cpp">Count pairs</a></b>
   If we are counting pairs we need to take care of 
   1. Do we need to count duplicate or distnict, if duplicates
   2. basic and main condition is arr[i] == sum - arr[i]"
 </pre>
 
# STL
  <pre>
  finding next permutation next_permutation(arr.begin(), arr.end())
  set<int>s - It is used for remove duplicates and sorting
  </pre>
# NOTE
  <pre>
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Array/22.%20Trapping%20rainwater.cpp">Trapping rain water</a></b>
   <img alt="Trapping image" width="550" height="200" src="https://github.com/teja963/DSA_All_Models/blob/master/Array/images/images.png">   for filling part
     we need to know the left and right end for particular bar in O(1)
     so we need to keep track of 2 arrays
  
  <b>Tips:</b>
  When we are searching check possibility for binary search
  </pre>
  
