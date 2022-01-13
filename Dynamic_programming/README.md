# Important approaches
  <pre>
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Dynamic_programming/12.%20Unique%20path.cpp">Unique Path</a></b> and <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Dynamic_programming/12_1.%20Unique%20Path%202.cpp">Unique Path 2</a></b>
    <img alt="Grid image" src="https://github.com/teja963/DSA_All_Models/blob/master/Dynamic_programming/images/robot2.jpg">
      
      recursion:
         fun(m,n):
          if(m==1||n==1)return 1;
          return fun(m-1,n) + fun(m,n-1);    //if there is a obstacle fill 0 instead of this 
          
  <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Dynamic_programming/4.%20Perfect%20Squares.cpp">Perfect squares and Min coins</a></b>
       recursion:
          fun(n):
            if (n == 0): return 0;
            if (n < 0): return;
            for j = 1 to m:
              ans = min(ans, fun(n - j*j) + 1);  //perfect squares
              ans = min(ans, fun(n - v[j]) + 1); //min no of coins
              
  <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Dynamic_programming/14.%20Edit%20Distance.cpp">Edit distance</a></b>
       recursion:
         m = s1.size    ,      n = s2.size
           fun(s1,s2,m,n):
              if (m == 0): return n                            eg:   a   b   c
              if (n == 0): return m                                  b   c   d
              
                 if s1[m-1] == s2[n-1]  // from right to left if matcher we will decrement both
                    fun(s1,s2,m-1,n-1)
                    
                 else return min(fun(s1,s2,m,n-1) , fun(s1,s2,m-1,n) ,fun(s1,s2,m-1,n-1)) + 1
                 
        for insert f(m,n-1) + 1
        for remove f(m-1,n) + 1
        for replace f(m-1,n-1) +1 
        
   <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Dynamic_programming/11.%20Gold%20Mine%20Problem.cpp">Gold mine problem</a></b>
       Instead of gng from start to destination, come from destination to start, for avoid overlap cases
          right - condition
          right_up - condition
          right_down - condition
          
   <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Dynamic_programming/15.%20Painting%20the%20fence.cpp">Paintin the fence</a></b>
     dp[1] = k
     dp[2] = k * k
     else dp[i] = ((k-1) * (dp[i-1]+dp[i-2]))%(10^9+7)
        
  </pre>
