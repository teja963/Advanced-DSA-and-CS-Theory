# Sliding Window Concept Usage
  <b>Used for Searching or pattern matching models on fixed size</b><br>
  <a href="https://github.com/teja963/DSA_All_Models/blob/master/Sliding%20Window/3_sliding_window_max.cpp">3. Sliding Window Maximum</a><br>
  <i>Explanation:</i><br>
   deque<int>q;
    <p>Use "deque" for storing maximum, find max element in the size k(first k elements) by<br>
       pushing elements back in decreasing otherwise pop the elements<br>
       after this first loop q.front() is the max element in first size k elements<br>
       if(q.front()==arr[i-1])q.pop_front();  //i=1 ,means if 2nd size of k contains first element then pop it</p>
