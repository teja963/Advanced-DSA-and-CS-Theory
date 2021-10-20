# Efficient Approaches
  <pre>
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Array/4.%20Sort%20012.cpp">Sort 012 in O(1)</a></b> or <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Array/24.%203%20way%20partitioning%20around%20given%20value.cpp">3 way partitioning</a></b>
   Just traverse through the each and every element 
           i                                    
   l_ _ _ _ _ _ _ _ _ h               if current element is 0 swap (l++,i)
                                      if current element is 1 continue
                                      if current element is 2 swap (i,h--)
                                      
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Array/7.%20Cyclic%20rotate.cpp">Cyclic rotate in O(n)</a></b>
   By using reverse function do  :  a=[1 2 3 4 5 6 7]     k=3;
      reverse entire array:      :  a=[7 6 5 4 3 2 1]
      reverse starting k elements:  a=[5 6 7 4 3 2 1]
      reverse remaining elements :  a=[5 6 7 1 2 3 4]
      
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Array/12.%20Count%20pairs%20with%20given%20sum.cpp">Count pairs</a></b>
   If we are counting pairs we need to take care of 
   1. Do we need to count duplicate or distnict, if duplicates
   2. basic and main condition is arr[i] == sum - arr[i]
   
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Array/19.%20Buying%20selling%20share%20atmost%20twice.cpp">Buying and selling atmost twice</a></b>
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
		 
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Array/25.%20Min%20swaps%20required%20k%20elements%20together.cpp">Min swaps required to bring K elemenst together</a></b>
  
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Array/37.%20Max%20sum%20path.cpp">Maximum sum path</a></b>
     <img alt="max sum path" width="500" height="200" src="https://github.com/teja963/DSA_All_Models/blob/master/Array/images/download.png">
        arr1: i sum1
        arr2: j sum2
                         if arr1[i]<arr2[j] : s1+=arr1[i++]
                         if arr2[j]<arr1[i] : s2+=arr2[j++]
                             if both elements are equal then update or shifting from 1 to another                  
   
  </pre>
# NOTE
  <pre>
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Array/10_kadanes_algo.cpp">Kadanes Alogrithm</a></b>
   Make a parallel array as ans array then update as:
        sum=0   ans=INT_MIN
        a: [ 1 -5  4  9  8 -10 6]
      sum: [ 1 -4  4  13 21 11 17]
      ans: [ 1  1  4  13 21 21 21]
      
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Array/15.%20Factorial%20of%20largenum.cpp">Factorial of large number</a></b>
    maintain the ans in array or string update each time array as well as size
    0: 1
    1: 1
    2: 2
    3: 6
    4: 4 2
    5: 0 2 1
   
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Array/22.%20Trapping%20rainwater.cpp">Trapping rain water</a></b>
   <img alt="Trapping image" width="550" height="200" src="https://github.com/teja963/DSA_All_Models/blob/master/Array/images/images.png">   for filling part
               we need to know
               the min between 
               left and right 
               one in O(n) time
   
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Array/23.%20Chocolate%20distribution.cpp">Chocolate Distribution Problem</a></b>
    <img alt="chocolate" width="600" height="450" src="https://github.com/teja963/DSA_All_Models/blob/master/Array/images/Chocolate-Distribution-Problem.png">
   
  </pre>
