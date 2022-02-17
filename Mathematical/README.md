# Tricky Approaches:
  <pre>
  <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Mathematical/36.%20Rearrange%20geeks%20and%20his%20classmates.cpp">Rearrange nums in O(N) and space O(1)</a></b>
  	a[i] = a[a[i]];
  	just modify a[i] = n * (a[a[i]] % n) + a[i] % n
  	so while traversing a[i] = a[i] / n
  	
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/mathematical/14.%20Check%20binary%20is%20multiple%20of%203.cpp">Check given binary number is multipe of 3 or not</a></b>
        ans: Count odd 1's and even 1's diff between odd 1's and even 1's is multiple of 3
        
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/mathematical/16.%20Final%20destination.cpp">Find destination</a></b>
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
  
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/mathematical/17.%20Points%20in%20st%20line.cpp">Points in a straight line</a></b>
         ans: 
            1. (i) It can have overlap points
               (ii) It can have vertical points( same value of x)
               (iii) Need to find their slopes, storing their slope using map
                        current_points= max ( current_points, m[y/x])
            2. current_points= max ( current_points, vertical_points)
            3. ans = max( ans, 1 + overlap + current_points) then clear the map use again
            
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/mathematical/20.%20Count%20sum%20of%20consecutives.cpp">Count sum of consecutives</a></b>
        N = a + (a+1) + (a+2) + .. + (a+L) 
        N = (L+1)*a + (L*(L+1))/2 
        a = (N- L*(L+1)/2)/(L+1) 

  We substitute the values of L starting from 1 till L*(L+1)/2 < N 
  If we get 'a' as a natural number then the solution should be counted.
  
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/mathematical/7.%20Container%20most%20water.cpp">Container with most water</a></b>
     6               |                |
     5   |           |       |        |
     4   |   |       |       |        |           for container two end points l and h 
     3   |   |   |   |       |   |    |           and the water stored in it is: min (a[l],a[h])*(h-l)
     2   |   |   |   |   |   |   |    |            
     1   |_ _| _ |_ _|_ _| _ |__ |_ _ |
         l                            h
     

  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/mathematical/9.%20Overlapping%20rectangles.cpp">Overlapping rectangles</a></b>
    <img width="315" align="center" alt="rectanglesOverlap" src="https://user-images.githubusercontent.com/69209797/137142430-6a4ba481-20e6-4a05-b49a-9c6518a8a89d.png">

    Conditions for overlap:
       1. if l1 == r1 or l2 == r2 (any cordinate matches) the line can't have +ve overlap
       2. if l1.x >= r2.x or l2.x >= r1.x // if it is on left side
       3. if r1.y >= l2.y or r2.y >= l1.y // if one rect is above other
       

  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Mathematical/25.%20Cows%20of%20foo%20land.cpp">Finding fibonacci num in log(n) </a></b>
     <img width="315" align="center" src="https://github.com/teja963/DSA_All_Models/blob/master/Mathematical/images/fibonacci.png">
     1. Recursively divide the given term and multiply the matrix untill we get 1 for n //n/2
     2. Atlast if we get 1 then need to multiply once again and return the term
         _        _     _     _  n
        |Fn+1  Fn  |   |1     1|
        |          | = |       |             
        |_Fn  Fn-1_|   |_1   0_|
        
        or byusing the formula {(1+sqrt(5)/2)^n}/sqrt(5);
        
  <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Mathematical/29.%20Fraction%20to%20recurring%20decimal.cpp">Fraction To Decimal</a></b>
     use map for storing repeated pattern
     m( numerator )= ans.size()  //ans is string
     numerator *= 10
     numerator %= denominator
     
  <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Mathematical/30.%20Count%20Number%20with%20Unique%20Digits.cpp">Count Number with Unique digits</a></b>
   for i = 2 to n:
    ans = ans + counterhelp(i) //counter help is no.of unique nums are possible approach with i digits
    
  <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Mathematical/31.%20Water%20and%20Jug%20Problem.cpp">Water and Jug problem(Aptitude)</a></b>
    j1 + j2 >= capacity and capacity %(j1,j2) == 0
    
  *<b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Mathematical/32.%20Sum%20of%202%20integers%20without%20%2B%20and%20-.cpp">Sum of 2 nums without + and -</a></b>*
    if no common bits are present it would be a | b,
    to find common bits do "and"     uint = carry //for neg nums
		  while(carry):
		    a ^= b
		    b = carry << 1
		    carry = a & b
		    
   <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Mathematical/33.%20Pair%20of%20Songs%20with%20duration%20divisible%20by%2060.cpp">Pair of songs duration is % 60</a></b>
   mod 60 means its always lie between [0,59] so consider array
   if rem  == 0 means its multiple of 60, so add its compliment v[0]  //because we need to count only once
   else add its compliement v[60-rem]
   update v[rem]++;   
         
  </pre>
# NOTE:
  <pre>
  1. Next greater number problem use next premuation for simple approach
  2. For given number see paterns from given input to usage of dp or fibonacci series
  3. Factorial of given values in array, store the fact values by providing size of max limit <b>O(max(array)+ N)</b>
  4. Check given num is power of smtg apply log on both sides get condition to check
     for 2: return n > 0 && __builtin_popcount(n) == 1;
     for 3: return n > 0 && 3^19 % n == 0;
     for 4: return n > 0 && __builtin_popcount(n) == 1 && n%10 == (1 || 4 || 6);
  </pre>
# ROOTS:
  <pre>
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Mathematical/1.%20finding%20nth%20root%20of%20M%20in%20nlog%20m.cpp">Finding Nth root of M O(N* log m)</a></b>
   binary search of m values(mid^n==m)
   
   <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Mathematical/28.Last%20digit%20of%20a%20pow%20b.cpp">Last digit of a^b (for large values)</a></b>
    find last 2 digits of b%4(and use map) 
  </pre> 
# XOR CONCEPTS
  <pre>
  <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Mathematical/35.%20Missing%20Number.cpp">Missing number</a></b>
   We can use sum of n number concept /
   We can use xor concepts by [0,1,2,3,4] ^ [0,1,2,4]
  a ^ b = c
  b ^ c = a
  c ^ a = b
  </pre>
