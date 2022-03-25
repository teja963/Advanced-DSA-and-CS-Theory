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
  <img widht="800" height="400" src="https://github.com/teja963/DSA-and-MYSQL/blob/master/Greedy/images/gas.png">
        sum+= gas[i]- cost[i] 
     if sum <0: //then it can't be starting bcz of empty tank
          ans = i +1 //next one
          sum =0 //update sum<0 to 0
          
     if sum of all the cost> sum of all the gas: then -1
     else return ans
     
  <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Greedy/11.%20Wiggle%20Subsequence.cpp">Wiggle subsequence</a></b>
   In this we need to find max length of subsequence of(alternate +ve and -ve nums diff)
   use 2 pointer approach 
   pos     neg   //Initially
   1        1
   if (positive) pos = neg + 1
   else if(negative)neg = pos + 1
   
  <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Greedy/12.%20Queue%20Reconstruction%20by%20Height.cpp">Queue Reconstruction by Height</a></b>
    Sort according to height(decreasing order, if same order by no.of ppl front(increasing)
    Now traverse array insert according to position after sorting
    
  <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Greedy/13.%20Maximum%20Length%20Chain.cpp">Max Length Chain</a></b>
    Sort by increasing order by second one [first, second]
  
  <b><a href="https://leetcode.com/problems/super-washing-machines/">Super washing machines Question</a></b> :-  <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Greedy/15.%20Super%20Washing%20Machines.cpp"> Answer</a></b>
   Kadane's prefix algorithm model
  
  <b><a href="https://leetcode.com/problems/partition-labels/">Question</a></b>                  <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Greedy/17.%20Partition%20labels.cpp">Partition labels</a></b>
   Find the last element occurance of character
   and use <b>maxi - prev</b>   , intializing to maxi 0, and prev -1
   if <b>maxi == i</b>   condition for spliting, the we can update 
   
  <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Greedy/18.%20Smallest%20string%20with%20given%20numeric%20value.cpp">Smallest string with given numberic value</a></b>
   First fill with a's and update string from rightend to leftend
   ans[--n] += min(25,k);
   
  **<b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Greedy/19.%20Two%20City%20Scheduling.cpp">Two city scheduling</a></b>**
   First to go city A and simultaneously calculate difference of B to A
   sort difference and choose least n values for shifting from A to B
   </pre>
   
   
# NOTE:
  <pre>                                                                  j      i
  1. Incase of [frst, second] use greedy by sorting
               min no.of platforms/(ending time)         -----
               min no.of rooms for meeting/(ending time)     |_ _ _    if end[j] > start[i] :  ans++
               min things/                                   |
               Activity selection(ending day)            -----
               sort the required array and make the necessary conditions to make clear
  </pre> 
          
