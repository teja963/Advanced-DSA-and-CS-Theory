# Greedy Logic:
  <pre>
     Jump problem logic:(hale and tortoise view)
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Greedy/1.%20Jump.cpp">1. Jump problem I </a></b>
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Greedy/2.%20Jump%20II.cpp">1. Jump problem II </a></b>
  
  reach
       _ _ _ _ _ _ _ _ _   _ _ _ _     _ _ _ _ _ _ _ _ _ __ _ _ _     _ _ _ _ _ __ _ _ _ _ _ _ _ _
     /                  \ /        \ /                            \ /                             \
    |                    |          |                              |                               |
    *----------*---------*----------*---------*----------*---------*----------*---------*----------*
    |	       |	|	    |	      |	         |	   |	      |         |          |
     \ _ _ _  / \_ _ _ _/\ _ _ _ _ / \ _ _ _ _/\ _ _ _ _/\ _ _ _ _ /\_ _ _ _  /\ _ _ _ _/\_ _ _ _ /
     
     i
     
     if(i>reach)then it can't be reach
     
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Greedy/5.%20longest%20palindrome.cpp">2. For longest palindrome</a></b>
      We need to do consider both even and odd freq to get max 
      eg: "aaaabbb"
          "aaaa" - 4,  "bb"   - 2 for odd case consider freq-1 for even
          if we including odd freq then we can add ans+1
              "aaaa b bb"- 7
              
  <b><a href="https://practice.geeksforgeeks.org/problems/pairs-with-specific-difference1533/1?utm_source=gfgpractice&utm_medium=banner&utm_campaign=Practice_Explore_POD_Top_Banner#">Question </a></b>  and <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Greedy/8.%20Pair%20with%20specific%20difference.cpp">Solution</a></b>
      Imp: After sorting based on que, we need to go l-r or r-l
           If we get the pair skip one iteration otherwise //implementation imp
   </pre> 
   
# NOTE:
  <pre>
  1. Incase of min no.of platforms or min no.of rooms for meeting or min things sort the required array and make the necessary conditions to make clear
  </pre> 
          
