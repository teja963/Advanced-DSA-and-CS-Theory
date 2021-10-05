# Sliding Window Concept Usage
  <b>Used for Searching or pattern matching models on fixed size</b><br>
  <a href="https://github.com/teja963/DSA_All_Models/blob/master/Sliding%20Window/3_sliding_window_max.cpp">3. Sliding Window Maximum</a><br>
  <i>Explanation:</i><br>
   deque q;
    <p>Use "deque" for storing maximum, find max element in the size k(first k elements) by<br>
       pushing elements back in decreasing otherwise pop the elements<br>
       after this first loop q.front() is the max element in first size k elements<br>
       if(q.front()==arr[i-1])q.pop_front();  //i=1 ,means if 2nd size of k contains first element then pop it</p><br>
  <a href="https://github.com/teja963/DSA_All_Models/blob/master/Sliding%20Window/4_count_anagrams.cpp">4. Count Anagrams</a><br>
  <i>Explanation:</i><br>
   map m; 
    <p>Use "map" for storing frequency, find all element frequency in the small string for comparing by each char<br>
     if big string(m) and small string(n) of size freq array equal c++; //basic<br>
     after this loop increment each upcmng char and decrement each outgng char and update freq<br> 
     
