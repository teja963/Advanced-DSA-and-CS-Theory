# Important approaches
  <pre>
  <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Dynamic_programming/6_min_cost_climbing_stairs.cpp">Min cost climbing stairs</a></b>: dp[i] = cost[i] + min(dp[i-1], dp[i-2])
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Dynamic_programming/12.%20Unique%20path.cpp">Unique Path</a></b> and <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Dynamic_programming/12_1.%20Unique%20Path%202.cpp">Unique Path 2</a></b>
    <img alt="Grid image" src="https://github.com/teja963/DSA_All_Models/blob/master/Dynamic_programming/images/robot2.jpg">
      
      recursion:
         fun(m,n):
          if(m==1||n==1)return 1;
          return fun(m-1,n) + fun(m,n-1);    //if there is a obstacle fill 0 instead of this 
   
  <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Dynamic_programming/17.%20Longest%20Common%20Subsequence.cpp">Longest common subsequence</a></b>   <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Dynamic_programming/19.%20Longest%20Repeated%20Subsequence.cpp">Longest Repeated subsequence</a></b>     Application:<b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Dynamic_programming/28.%20Delete%20operations%20for%202%20string.cpp">Delete operations for 2 string</a></b>       <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Dynamic_programming/32.%20Form%20Palindrome.cpp">Form Palindrome</a></b>
  <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Dynamic_programming/21.%20LCS%20of%20three%20strings.cpp">LCS of 3 strings</a></b>	
  	fun(s1,s2,m,n):
  		if(m == 0 || n == 0)return 0;					After finding length of common subsequene                            first half anf second half are equal rgt
  		if(s1[m] == s2[n])return 1 + fun(s1,s2,m-1,n-1);		s1.size() + s2.size() - 2*dp[ s1.size ][ s2.size ]            string = "teja" , ans_string = "tejaajet" 
  		return max(fun(s1,s2,m-1,n) , fun(s1,s2,m,n-1));                                                                           if we observer carefully ans_string_frst_half = "teja", ans_string_second_half = "ajet", which is reverse of string
  		
  		if repeated subsequence means m != n                                                                                           so ans = n - dp[n][n], where n is size of given string 

              
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
        
  <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Dynamic_programming/11.%20Gold%20Mine%20Problem.cpp">Gold mine problem</a></b>                                                                       <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Dynamic_programming/11_1.%20Broken%20blocks.cpp">Broken blocks</a></b>
       Instead of gng from start to destination                 Same Logic, but if there is wooden blocks consider all -1,
       come from destination to start,                          then we need to make max(down, diag_up, diag_down, 0); - Imp condition
        for avoid overlap cases                      
          right - condition                                                                                          
          right_up - condition
          right_down - condition
          
  <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Dynamic_programming/15.%20Painting%20the%20fence.cpp">Painting the fence</a></b>
     dp[1] = k
     dp[2] = k * k
     else dp[i] = ((k-1) * (dp[i-1]+dp[i-2]))%(10^9+7)
     
  <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Dynamic_programming/18.%20Longest%20Palindromic%20Substring.cpp">Longest Palidromic substring</a></b>    <b><a href="https://leetcode.com/problems/palindromic-substrings/">Palindromic substring</a></b>
    Base 1: first fill diagonal single elements 1(len = 1)
    Base 2: second fill size 2 s[i] == s[i+1] (track starting index i)
    Loop :  Now check size of 3 and greater(i)
              starting from j = 0 to n - i + 1 times
              **Imp_Condition** : if(s[j] == s[end] and dp[j+1][end-1] == 1)  // then it is a palindrome 
                                                                                 Update starting index and
                                                                                 max length
              
  <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Dynamic_programming/20.%20Longest%20Increasing%20Subsequence.cpp">Longest Increasing Subsequence</a></b>  and <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Dynamic_programming/24.%20Longest%20Subsequence-1.cpp">Longest Subsequence 1</a></b> and <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Dynamic_programming/22.%20Maximum%20Increasing%20Subsequence.cpp">Maximum increasing subsequence</a></b>    Extension:<b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Dynamic_programming/36.%20Russian%20Dolls%20envelopes.cpp">Russian Dolls Envelopes</a></b>
    Imp condition :                                                                        For russian dolls probelms convert into LIS by fixing one parameter inreasing
         dp[n] = {1}                                                                       after getting variable paramter find LIS 
        if( a[j] < a[i] )                                              
        {
          dp[i] = max ( dp[i], dp[j] + 1)
        }
        
  <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Dynamic_programming/10.%20House%20robber.cpp">House robber</a></b>  and  <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Dynamic_programming/10_1.%20%20House%20robber%202.cpp">House robber 2</a></b>   Application:<b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Dynamic_programming/30.%20Delete%20and%20Earn.cpp">Delete and Earn</a></b> 
    Not choosing adjust house or elements and getting max value
    dp[i] = max( dp[i-1] , dp[i-2] + nums[i]);
    
  <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Dynamic_programming/23.%20Decode%20Ways.cpp">Decode ways</a></b>
    Need to Update it 
    
  <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Dynamic_programming/26.%20Largest%20Square%20formed%20in%20Matrix.cpp">Largest Square formed in matrix</a></b>
    frst check base case of size 1                                            1 1
    Next is similar to edit dist application (choosing min among 3 ways)      1  mat[i][j] == 1 in directions 
    update size each time with min among them
    
  <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Dynamic_programming/27.%20Handshake.cpp">**Hand Shake Problem**</a></b>
   <b>Catalan Number's application</b>
   starting from 1 to N, we can select (2 <= K <= N)
   Among these Select (2 <= k)  (k<= N)
   Anyone from part 1 can't give handshake to Part 2
   
    i runs from 2 to N
    j runs from 2 to i
    
  <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Dynamic_programming/29.%20Champagne%20Tower.cpp">Champagne Tower</a></b>
   if each champagne glass if full dp[i][j] = 1
   after filling one layer next down layer filled only excess water in top
   so <b>it will divide (dp[i][j] - 1) / 2 </b> equally  left and right
   dp[i + 1][j] += left_half
   dp[i + 1][j + 1] += right_half
   dp[i][j] = 1; 
  
  <b><a href="https://leetcode.com/problems/count-all-valid-pickup-and-delivery-options/">Question</a></b>          <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Dynamic_programming/31.%20Count%20all%20pick%20ups%20and%20delivery%20options.cpp">Count all pickups and delivery options</a></b>                 
   p1   p2   p3   p4 
   _    _    _    _     _     _     _     _ 
   di possible after pi
   so for d1 we have 2*n - 1 possiblilities
   so for d2 we have p1 d1 p2 fixed so we have 2*n - 3 possibilities ...........
   for p1 to pn we have n!ways
   so n! * (1 * 3* 5 * ...2n-1)
   
  <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Dynamic_programming/33.%20count%20sorted%20vowels%20string.cpp">count sorted vowels string</a></b>
  make a table for pattern finding if input is range is very small, then curr o/p is dependent on prev o/p
  
	  n u o i e a
	  1 1 1 1 1 1
	  2 1 2 3 4 5
	  3 1 3 6 10 15 
	  
  <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Dynamic_programming/34.%20Longest%20Increasing%20path%20in%20a%20matrix.cpp">Longest Incrasing Path in a matrix</a></b>     <img alt= "Grid Image" src="https://github.com/teja963/Advanced-DSA/blob/master/Dynamic_programming/images/grid1.jpg">
  we don't know where to start so we traverse all the nodes                     make recursive block diagrams for each cell and possibilities
  implement base case and all possibilites
  dp[i][j] = max({left, right, up, down}) + 1 - for couting this step
  
  <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Dynamic_programming/38.%20Number%20of%20ways.cpp">Number of ways</a></b>
  	dp[i] = dp[i-1] + dp[i-4]
  </pre>

# Recurrsion -> DP Impelmentation
  <pre>
  <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Dynamic_programming/1.%20coin%20problem.cpp">Coin Problem</a></b>: if dp[0] = 1;
  <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Dynamic_programming/2.%20knapsack%200-1.cpp">Knapsack</a></b>: N == 0, W == 0, fill with zeros, we need to consider or not cases
  <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Dynamic_programming/4.%20Perfect%20Squares.cpp">Perfect squares and Min coins</a></b>: See dp version
  <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Dynamic_programming/5.%20Integer%20Break.cpp">Integer Break</a></b>: check max limit need to traverse j != n, dp[i] = max(dp[i], j * dp[i-j])
  <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Dynamic_programming/8.%20subset%20equal%20partition.cpp">Subset equal partition</a></b>: We need to consider or not cases
  </pre>
  
# Pattern Finding ques
  <pre>
  <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Dynamic_programming/9.%20frnds%20paring.cpp">Friends pairing</a></b>: check this pattern
  <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Dynamic_programming/15.%20Painting%20the%20fence.cpp">Painting the fence</a></b>: Pattern
  </pre>
# NOTE
  <pre>
  When we declare the 2d array, frst assign default values
  if min assign INT_MAX
  if max assign INT_MIN
  else assign zero
     At last based on question intialize the frst row and frst col base conditions 
  </pre>
