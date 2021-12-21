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
           
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Greedy/9.%20Gas%20Station.cpp">Gas Station</a></b>
  <img widht="800" height="400" hsrc="https://github.com/teja963/DSA-and-MYSQL/blob/master/Greedy/images/gas.png">
        sum+= gas[i]- cost[i] 
     if sum <0: //then it can't be starting bcz of empty tank
          ans = i +1 //next one
          sum =0 //update sum<0 to 0
          
     if sum of all the cost> sum of all the gas: then -1
     else return ans
   </pre> 
   
# NOTE:
  <pre>                                                                  j      i
  1. Incase of min no.of platforms/(ending time)         -----
               min no.of rooms for meeting/(ending time)     |_ _ _    if end[j] > start[i] :  ans++
               min things/                                   |
               Activity selection(ending day)            -----
               sort the required array and make the necessary conditions to make clear
  </pre> 
          
