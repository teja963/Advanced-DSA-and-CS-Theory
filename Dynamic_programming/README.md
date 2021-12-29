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
  </pre>
