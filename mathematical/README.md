# Tricky Approaches:
  <pre>
  <a href="https://github.com/teja963/DSA_All_Models/blob/master/mathematical/14.%20Check%20binary%20is%20multiple%20of%203.cpp">Check given binary number is multipe of 3 or not</a>
        ans: Count odd 1's and even 1's diff between odd 1's and even 1's is multiple of 3
        
  <a href="https://github.com/teja963/DSA_All_Models/blob/master/mathematical/16.%20Final%20destination.cpp">Find destination</a>
                           a
                     |_ _ _ _ _ _(a,b)
                     |           |
                     |           |                  can we go (a,b) in x steps, so it need to go a+b steps min to reach, find extra
                     |        b  |                  steps we need to maintain ans= x- abs(a)-abs(b)
     _ _ _ _ _ _ _ _ |_ _ _ _ _ _| _ _ _            if ans < 0: it can't reach  //means less than min steps
                     |(0,0)                         return ans % 2 == 0  , if extra steps is even then we can reach //last logic
                     |
                     |
                     |
  
  <a href="https://github.com/teja963/DSA_All_Models/blob/master/mathematical/17.%20Points%20in%20st%20line.cpp">Points in a straight line></a>
         ans: 
            1. (i) It can have overlap points
               (ii) It can have vertical points( same value of x)
               (iii) Need to find their slopes, storing their slope using map
                        current_points= max ( current_points, m[y/x])
            2. current_points= max ( current_points, vertical_points)
            3. ans = max( ans, 1 + overlap + current_points) then clear the map use again
  
  
  </pre>
# NOTE:
  <pre>
  1. Next greater number problem use next premuation for simple approach
  2. For given number see paterns from given input to usage of dp or fibonacci series
  3. Factorial of given values in array, store the fact values by providing size of max limit <pre>O(max(array)+ N)</pre>
  </pre>
