# Greedy Logic:
  <pre>
  1. Jump problem logic:(hale and tortoise view)
  <a href="https://github.com/teja963/DSA_All_Models/blob/master/Greedy/1.%20Jump.cpp">1. Jump problem I </a>
  <a href="https://github.com/teja963/DSA_All_Models/blob/master/Greedy/2.%20Jump%20II.cpp">1. Jump problem II </a>
  
  reach
       _ _ _ _ _ _ _ _ _   _ _ _ _     _ _ _ _ _ _ _ _ _ __ _ _ _     _ _ _ _ _ __ _ _ _ _ _ _ _ _
     /                  \ /        \ /                            \ /                             \
    |                    |          |                              |                               |
    *----------*---------*----------*---------*----------*---------*----------*---------*----------*
    |	       |	|	    |	      |	         |	   |	      |         |          |
     \ _ _ _  / \_ _ _ _/\ _ _ _ _ / \ _ _ _ _/\ _ _ _ _/\ _ _ _ _ /\_ _ _ _  /\ _ _ _ _/\_ _ _ _ /
     
     i
     
     if(i>reach)then it can't be reach
     
  <a href="https://github.com/teja963/DSA_All_Models/blob/master/Greedy/5.%20longest%20palindrome.cpp">2. For longest palindrome</a>
      We need to do consider both even and odd freq to get max 
      eg: "aaaabbb"
          "aaaa" - 4,  "bb"   - 2 for odd case consider freq-1 for even
          if we including odd freq then we can add ans+1
              "aaaa b bb"- 7
   </pre> 
          
