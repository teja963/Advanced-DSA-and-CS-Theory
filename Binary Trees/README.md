# Applications
  <pre>
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Binary%20Trees/6.%20Max%20depth%20BT.cpp">Max Depth</a></b>                                      <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Binary%20Trees/10.%20Min%20depth%20BT.cpp">Min Depth</a></b>
       Max:                                           Min:
        if !root: return 0;                           if !root: return INT_MAX;
        1+ max ( f(left), f(right) );                 leaf node : return 1;
                                                      1+ min ( f(left), f(right) ); 
                                                      
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Binary%20Trees/16.%20BT%20Tilt.cpp">BT Tilt</a></b>                                                 <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Binary%20Trees/40.%20Sum%20Tree.cpp">Sum Tree</a></b>                  <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Binary%20Trees/50.%20Count%20Number%20of%20Subtrees%20having%20given%20sum.cpp">Count no.of subtrees with given sum</a></b>
  Tilt: absolute diff of sum of all left tree nodes and                     function: sum(){ }
        right tree nodes                                                    recursively check for all nodes 
        ans+= abs(left -right)
        return left + right + root.val   //sum of all nodes in left or right
  
  <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Binary%20Trees/25.%20LCA%20BST.cpp">LCA BST</a></b>                  **<b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Binary%20Trees/33.%20LCA%20BT.cpp">LCA BT</a></b>**
  	2 cases whether we need to go left or right              <b>BASE CASE</b>: if !root <b>or</b> root == p <b>or</b> root == q: return root
 	BST means right is greater than root, left is smaller,                     Traverse both left and right
    otherwise break root itself is ans                                         if left and right: return root
                                                                               else return left? left: right;
                                                                               
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Binary%20Trees/27.%20BT%20from%20preorder%20inorder.cpp">BT from inorder and Preorder</a></b>   Extension:<b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Binary%20Trees/44.%20PostOrder%20from%20Inorder%20and%20Preorder.cpp">Post Order from Inorder and Preorder</a></b>
     
              l       p       h
     inorder: 1 2 3 4 5 6 7 8 9      By storing inorder position in map for efficient search       that p value in inorder[p] is postorder 
     preorder:5 4 .............      Insert the elements through preorder elements as root
              i                      root.left = (l, p-1)
                                     root.right = (p+1, h)
                                     
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Binary%20Trees/28.%20BT%20from%20postorder%20inorder.cpp">BT from inorder and postorder</a></b>
             l       p       h
     inorder: 1 2 3 4 5 6 7 8 9      By storing inorder position in map for efficient search
    postorder:..............6 5      Insert the elements through postorder elements as root
                              i      root.right = (p+1, h)
                                     root.right = (l, p-1)
                                     
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Binary%20Trees/37.%20Top%20view%20of%20BT.cpp">Top view</a></b> and <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Binary%20Trees/38.%20Bottom%20view%20of%20BT.cpp">Bottom view</a></b> and <b><a href="#">Left view </a></b> and <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Binary%20Trees/20.%20Right%20side%20view%20of%20BT.cpp">Right Side view</a></b> and <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Binary%20Trees/35.%20Vertical%20Traversal%20of%20tree.cpp">Vertical Traversal of Tree</a></b> 
     Use level order traversal and use map for storing that vertical view in order 
               -2 -1  0  1  2
                |  |  |  |  |
                |  |  2  |  |
                |  |/ | \|  |
                |  1  |  3  |
                | /|\ | /|\ |
                5  | 6 7 |  8
                |  |  |  |  |
   
  <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Binary%20Trees/54.%20Maximum%20width%20of%20Binary%20Tree.cpp">Maximum widht of BT</a></b>
   Use parent, left_child, right_child index concept add index parameter in the queue
   i - parent
   2 * i + 1 - left_child
   2 * i + 2 - right_child
   
  </pre>
  
# BST
  <pre>
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Binary%20Trees/29.%20Convert%20sorted%20array%20to%20BST.cpp">BST from Sorted array</a></b>
     
          l          m-1  m  m+1          h                  root.left= (l, m-1)
    arr:  1   2   3   4   5   6   7   8   9                  root.right= (m+1, h)
    
* Properities:
   <b>Inorder traversal of BST gives sorted order</b> 
   <b>Application:</b><b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Binary%20Trees/36.%20Check%20BST.cpp">Check BST</a></b>: implement false conditions
                      <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Binary%20Trees/43.%20find%20mode%20in%20BST.cpp">Mode in BST</a></b>
                      <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Binary%20Trees/47.%20Find%20Pair%20with%20given%20target%20in%20BST.cpp">Find Pair in BST with target sum</a></b>
                      <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Binary%20Trees/48.%20Add%20All%20greater%20values%20given%20node%20in%20BST.cpp">Add all greater values in nodes in BST</a></b>
  </pre>
  
# Concepts
  <pre>
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Binary%20Trees/4.%20Same%20tree.cpp">Same Tree</a></b>: p(left,right) = q(left,right)
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Binary%20Trees/5.%20Symmetric%20tree.cpp">Symmetric tree</a></b>: p(left,right) = q(right,left)
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Binary%20Trees/14.%20Invert%20BT.cpp">Invert tree</a></b>: LEVEL ORDER = swap(left,right)
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Binary%20Trees/17.%20Sum%20of%20left%20leaves.cpp">Left leaves</a></b>:               1
                           /   \
                        **2     3 
                        
                       f(root.left)
                          f(!root.left.left&&!root.left.right)
                          
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Binary%20Trees/15.%20Diameter%20of%20BT.cpp">Diameter tree</a></b>: while finding height of tree we will update dist
  (max dist btw 2 nodes,  distance = max (distance, left.ht+right.ht);
  
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Binary%20Trees/18.%20Flatten%20BT%20to%20LL.cpp">Flatten BT in O(1) extra space</a></b>: See the result pattern from back and compare in BT
  <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Binary%20Trees/Level%20order%20Models/42.%20Check%20given%20tree%20is%20heap.cpp">Heap tree</a></b>: Its should be complete binary tree
                 DO Inorder traversal
                 1. Just check heap property and without filling left we can't have right including this property 
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Binary%20Trees/45.%20Expression%20tree.cpp">Expression tree</a></b>
              +
           /     \
          *       -
        /  \    /   \
       5    4  100  20           l=fun(root->left); 
                                 r=fun(root->right);
          
              +
           /     \
          20      80        // by dfs we need to return l + "root->data"+ r
          
            100               
  
  <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Binary%20Trees/9.%20Balanced%20BT.cpp">Balanced BT</a></b>: left && right && abs(ht(left) - ht(right)) <= 1
  <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Binary%20Trees/49.%20Maximum%20sum%20of%20Non-adjacent%20Nodes.cpp">Maximum sum of non-adjacent Nodes</a></b>
  Need to Update
  <b><a href="https://github.com/teja963/DSA-and-MYSQL/blob/master/Binary%20Trees/51.%20Leaves%20to%20DLL.cpp">Leaves to DLL</a></b>
     Use preorder to get leaves and edit leaves nodes,
     In function if we want to modify and stay in recursive call use reference(&)
  </pre>
                          
# Recursive and Iterative
  <pre>
  	Use stack for Iterative process 
   <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Binary%20Trees/1.%20Inorder%20traversal.cpp">Inorder Traversal</a></b>: Just observe ans pattern
   <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Binary%20Trees/2.%20Preorder%20traversal.cpp">Preorder Traversal</a></b>: Level order traversal use stack instead of queue
   <b><a href="https://github.com/teja963/Advanced-DSA/blob/master/Binary%20Trees/3.%20Postorder%20traversal.cpp">Postorder Traversal</a></b>: Level order traversal and reverse the stack outcome
  </pre> 
  
# Theory
  <pre>
  <b>Types of Binary Tree</b>
  <b>1. Strict BT :-</b> each node has exactly (2 or 0)children
  <b>2. Full BT :-</b>each node has 2 children and all leaf nodes are at same level
  <b>3. Complete BT :-</b>All leaf nodes are at ht (h or h-1) and also without any missing number in sequence.
  </pre>
