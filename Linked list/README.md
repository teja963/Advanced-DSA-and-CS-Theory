# Implementation
  <pre>
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Linked%20list/1.%20Reverse%20LL.cpp">Reverse SLL</a></b>
                     <img src="https://github.com/teja963/DSA_All_Models/blob/master/Linked%20list/images/Reverse.gif" alt="reverse_gif" width="550" height="300" >
    For DLL just swap the prev and next and traverse
    swap(curr->pre, curr->next);
    curr=curr->prev;
    
  **<b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Linked%20list/2.%20Reverse%20LL%20given%20size.cpp"> Reverse LL in given size</a></b>**
      
    fixed:first=curr   head(after changing)
                   /
         1  2  3  4     5  6  7  8
        curr    
            fixed:prev_first
            
            We need to maintain the end points for each
            fixed size and made the changes using reverse function
            
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Linked%20list/11.%20Intersection%20point%20LL.cpp">Intersection point</a></b> or <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Linked%20list/32.%20Polynomial%20%20addition.cpp">Polynomial addition</a></b>
      Just traverse untill the last nodes of LL, at end point interchange(same reason for polynomial addition) 
      their path for getting equal distance from intersection node(for getting missed powers addition)
      
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Linked%20list/29.%20Linkedlist%20cycle%202.cpp">Cycle detect and find intersection</a></b>
       By uing slow and fast method check loop (slow== fast)
       if loop present 
                           6 - 7 --- slow = fast
                          /     \
        (1) (2) (3) (4)  5       8--slow=slow->next
       - 1 - 2 - 3 - 4 - |       |
                     (4)12      9(1)
                         \      /
                          11 - 10(2)
                          (3)
  
  
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Linked%20list/30.%20Reorder%20list.cpp">Reorder List</a></b>
      
      h1   n1
      --1--2--3--4--5
        |\
        | |
        | |
        | |
        | |
        | \
      --6--7--8--9--10
       h2  n2
  
  
  **<b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Linked%20list/33.%20Count%20triplets%20in%20SLL.cpp">Count triplets in SLL in O(N*N) and space O(N)</a></b>**
    Use map for storing each value for each iteration
    for SLL we can't traverse back of the list untill it was reversed so
    1 2 3    x=6
    for i=head to i:
       for j=i->next to j:
          if m[max( 0, x- i->data->j->data)] count++;
       
       m[i->data]=1;
  
  <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Linked%20list/35.%20Sort%20List.cpp">Sort List</a></b>
  	Merge sort implementation
  	
  <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Linked%20list/36.%20swap%20kth%20nodes%20from%20ends.cpp">Swap kth nodes from ends</a></b>
    <b>check min(k, n - k + 1)</b>
    make prev_node a from frst and prev_node b from end
    make a connection diagram and implment 
  </pre>
# Methods
  <pre>
               fast&&fast.next
              /              \
  slow = head(+1)            fast = head(+2)
         S
  LL:1   2   3   4 
  LL:1   2   3   4
             F
             
  <b>Rotate List make it circular and break</b>
  </pre>
  
     
  
