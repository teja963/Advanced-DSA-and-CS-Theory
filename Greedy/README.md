# Greedy Logic:
  <pre>
  <a href="#">1. Jump problems logic: (hale and tortoise view)</a>
  
  reach
       _ _ _ _ _ _ _ _ _   _ _ _ _     _ _ _ _ _ _ _ _ _ __ _ _ _     _ _ _ _ _ __ _ _ _ _ _ _ _ _
     /                  \ /        \ /                            \ /                             \
    |                    |          |                              |                               |
    *----------*---------*----------*---------*----------*---------*----------*---------*----------*
    |	       |	|	   |	     |	       |	 |	    |         |          |
     \ _ _ _  / \_ _ _ _/\ _ _ _ _ / \ _ _ _ _/\ _ _ _ _/\ _ _ _ _ /\_ _ _ _  /\ _ _ _ _/\_ _ _ _ /
     
     i
     
     if(i>reach)then it can't be reach
     
  <a href="#">2. For longest palindrome</a>
      We need to do consider both even and odd freq to get max 
      eg: "aaaabbb"
          "aaaa" - 4,  "bb"   - 2 for odd case consider freq-1 for even
          if we including odd freq then we can add ans+1
              "aaaa b bb"- 7
   </pre> 
          
