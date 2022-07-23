# Sliding Window Concept Usage
  <pre>
  <b>Used for Searching or pattern matching models on fixed size</b>
  <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Sliding%20Window/3.%20Sliding%20window%20max.cpp">Sliding Window Maximum</a></b>
 
       deque q;
       Use "deque" for storing maximum, find max element in the size k(first k elements) by
       pushing elements back in decreasing otherwise pop the elements
       after this first loop q.front() is the max element in first size k elements
       if(q.front() == arr[i-1])q.pop_front();  **i=1 ,means if 2nd size of k contains first element then pop it** 
     
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Sliding%20Window/6.%20count%20the%20no%20of%20subarrays%20in%20given%20range.cpp">Count no.of subarrys in given range in O(n)</a></b>
   
    Count no.of subarrays <= R and L-1 and subtract L-1(count) from R(count)  //logic
    <b>Using (Sliding window and 2 pointer)find subarrays having sum less than or equal to X(eg: 5)</b>
    for: add each element one by one
    
      1   4    6    8
    start      end
    
        while start<= end  and sum>x:  //sum-=arr[start++]
        count+= (end-start+1)
        
  <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Sliding%20Window/8.%20Smallest%20window%20containing%20012.cpp">Smallest window containing 012</a></b>
    we can find 012, 021, 102, 120, 201, 210, They haven't mention anything abt sequence
    so make index of two pointer for last and first element
    index: 0 1 2 3 4 5 6 7 8 9 10                ans = min(ans, last_element - first_element + 1)
    input1:0 1 2 1 2        first_element = 0 , last_elment = 2 
    input2:0 1 1 2 0        first_element = 4, last_element = 2

  <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Sliding%20Window/9.%20Max%20points%20you%20can%20obtain%20from%20cards.cpp">Max points you can obtain from cards</a></b>
  	Just need to get idea of sliding pattern such that removing from ends means
  
  <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Sliding%20Window/10.%20Equivalent%20sub%20arrays.cpp">Equivalent subarrays</a></b>

	Same as Brute force approach for counting no.of subarrays
	we will sliding concept and map
	while i <= j and m.size() == dist_count:           //this logic is imp
		m[arr[i++]]--;
		if(m[arr[i]] == 0): m.erase(arr[i])  	
  </pre>
             
