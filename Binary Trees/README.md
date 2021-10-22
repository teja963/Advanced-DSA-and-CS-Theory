# Applications
  <pre>
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Binary%20Trees/6.%20Max%20depth%20BT.cpp">Max Depth</a></b>  and <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Binary%20Trees/10.%20Min%20depth%20BT.cpp">Min Depth</a></b>
       Max:                                           Min:
        if !root: return 0;                           if !root: return INT_MAX;
        1+ max ( f(left), f(right) );                 leaf node : return 1;
                                                      1+ min ( f(left), f(right) ); 
                                                      
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Binary%20Trees/16.%20BT%20Tilt.cpp">BT Tilt</a></b> and <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Binary%20Trees/40.%20Sum%20Tree.cpp">Sum Tree</a></b>
  Tilt: absolute diff of sum of all left tree nodes and                             function: sum(){ }
        right tree nodes                                                            recursively check for all nodes 
        ans+= abs(left -right)
        return left + right + root.val   //sum of all nodes in left or right
        
        
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Binary%20Trees/27.%20BT%20from%20preorder%20inorder.cpp">BT from inorder and Preorder</a></b>
     
              l       p       h
     inorder: 1 2 3 4 5 6 7 8 9      By storing inorder position in map for efficient search
     preorder:5 4 .............      Insert the elements through preorder elements as root
              i                      root.left = (l, p-1)
                                     root.right = (p+1, h)
                                     
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Binary%20Trees/28.%20BT%20from%20postorder%20inorder.cpp">BT from inorder and postorder</a></b>
             l       p       h
     inorder: 1 2 3 4 5 6 7 8 9      By storing inorder position in map for efficient search
    postorder:..............6 5      Insert the elements through postorder elements as root
                              i      root.right = (p+1, h)
                                     root.right = (l, p-1)
                                     
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Binary%20Trees/37.%20Top%20view%20of%20BT.cpp">Top view</a></b> and <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Binary%20Trees/38.%20Bottom%20view%20of%20BT.cpp">Bottom view</a></b> and <b><a href="#">Left view </a></b> and <b><a href="#">Right view</a></b> 
     Use level order traversal and use map for storing that vertical view 
     in order 
               -2 -1  0  1  2
                |  |  |  |  |
                |  |  2  |  |
                |  |/ | \|  |
                |  1  |  3  |
                | /|\ | /|\ |
                5  | 6 7 |  8
                |  |  |  |  |
                
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Binary%20Trees/18.%20Flatten%20BT%20to%20LL.cpp">Flatten BT</a></b>
   
                                     
  </pre>
  
# BST
  <pre>
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/Binary%20Trees/29.%20Convert%20sorted%20array%20to%20BST.cpp">BST from Sorted array</a></b>
     
          l          m-1  m  m+1          h                  root.left= (l, m-1)
    arr:  1   2   3   4   5   6   7   8   9                  root.right= (m+1, h)
    
* Properities:
   1. Inorder traversal of BST gives sorted order 
  </pre>
  
# Concepts
  <pre>
  Same tree     : p(left,right) = q(left,right)
  Symmetric tree: p(left,right) = q(right,left)
  Invert tree   : LEVEL ORDER = swap(left,right)
  Left leaves   :            1
                           /   \
                        **2     3 
                        
                       f(root.left)
                          f(!root.left.left&&!root.left.right)
                          
  Diameter tree : while finding height of tree we will update dist
  (max dist btw   distance = max (distance, left.ht+right.ht);
  2 nodes)
  
  </pre>
                          
# Recursive
  <pre>




  </pre> 
