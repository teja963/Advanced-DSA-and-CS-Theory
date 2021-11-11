# Sliding Window Concept Usage
   <pre>
  <b>Used for Searching or pattern matching models on fixed size</b>
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Sliding%20Window/3_sliding_window_max.cpp">Sliding Window Maximum</a></b>
 
   deque q;
    <p>Use "deque" for storing maximum, find max element in the size k(first k elements) by
       pushing elements back in decreasing otherwise pop the elements
       after this first loop q.front() is the max element in first size k elements
       if(q.front()==arr[i-1])q.pop_front();  //i=1 ,means if 2nd size of k contains first element then pop it</p>
  
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Sliding%20Window/4_count_anagrams.cpp">Count Anagrams</a></b>

   map m; 
    <p>Use "map" for storing frequency, find all element frequency in the small string for comparing by each char
     if big string(m) and small string(n) of size freq array equal c++; //basic
     after this loop increment each upcmng char and decrement each outgng char and update freq 
     
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Sliding%20Window/6.%20count%20the%20no%20of%20subarrays%20in%20given%20range.cpp">Count no.of subarrys in given range in O(n)</a></b>
   
    Count no.of subarrays <= R and L-1 and subtract L-1(count) from R(count)  //logic
    <b>Using (Sliding window and 2 pointer)find subarrays having sum less than or equal to X(eg: 5)</b>
    for: add each element one by one
    
      1   4    6    8
    start      end
    
        while start<= end  and sum>x:  //sum-=arr[start++]
        count+= (end-start+1)
             
