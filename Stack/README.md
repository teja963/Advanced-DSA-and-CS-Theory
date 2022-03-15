# Stack Applications
  <pre> 
    <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Stack/10.%20Insert%20at%20end%20of%20stack.cpp">Insert at the end</a></b>                                                                          
    Base case: if it is empty: push element x
               
                Insert 1 at end
                 5 4 3 2 - push 2
                 5 4 3 - push 3
                 5 4 - push 4
                 5   - push 5
                 ( ) - push 1
           
    <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Stack/11.%20Reverse%20stack%20using%20recursion.cpp">Reverse stack using recursion</a></b>
           Use Insertend fun and call the reverse fun recursively
           
    <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Stack/12.%20Sort%20stack.cpp">Sort Stack Problem</a></b>
           Using another stack shift all the elements like insertion sort
           s1: 1 4 5 3 2
           s2: 5 4 3 2 1
           s1: 1 2 3 4 5
    <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Stack/8.%20Next%20greater%20element.cpp">Next greater Element</a></b>
    Traverse from right to left and keep storing the each and every elements in the stack
    when arriving element is greater than s.top(), then pop all the elements untill that condition
          
    <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Stack/13.%20Max%20rectangle%20in%20histogram.cpp">Max Rectangle area in Histogram</a></b>
                              _ _         _ _
	     6    _ _        |   |    _ _|   |
	     5   |   |       |   |   |   |   |         find next greater element in left,rgt with base(s.empty) as corner elements 
	     4   |   |_ _    |   |   |   |   |         index and area = max(area, (r[i]-l[i]+1)*arr[i]);
	     3   |   |   |_ _|   |_ _|   |   |
	     2   |   |   |   |   |   |   |   | 
	     1   |_ _| _ |_ _|_ _| _ |__ |_ _|
	
    <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Stack/14.%20Stock%20span.cpp">Stock Span Problem</a></b>
           We see that S[i] on the day i can be easily computed if we know the closest day preceding i, such that the price is
           greater than on that day than the price on the day i. If such a day exists, let’s call it h(i),
            otherwise, we define h(i) = -1. 
          The span is now computed as S[i] = i – h(i). See the following diagram.
          
    <img alt="Stock Span" width="500" height="300" src="https://github.com/teja963/DSA_All_Models/blob/master/Stack/images/stock.png">
    <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Stack/16.%20count%20reversals.cpp">Count reversals</a></b>                          Concept Application: <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Stack/18.%20Minimum%20remove%20to%20make%20valid%20parentheses.cpp">Minimum remove to make valid parentheses</a></b>
         "}{{}}{{{"   3                                                                              
         "{{}{{{}{{}}{{"   -1                                Use the open close concept and do
                                                             right balancing  and left balancing iterating 2 times 

         1. count the no.of open and close
         2. if count(open)>0 and s[i]=='}'  open --  (it means balanced for that open)  
         
    <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Stack/17.%20Simplify%20Path.cpp">Simplify Path</a></b>
    	Store /content//
    	push string between /  and / in the stack
    	if string is "." current direcotry
    	if string is ".." parent direcotry so pop current
    	otherwise push in the stack
  </pre>
    
# NOTE:
  We can use stack for balancing checking (eg: ( ), a b b a....)Applications
