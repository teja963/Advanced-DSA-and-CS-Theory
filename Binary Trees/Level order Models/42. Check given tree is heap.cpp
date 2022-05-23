class Solution {
  public:
    bool isHeap(struct Node* tree) {
        // code here
       queue<Node*>q;
       q.push(tree);
       bool check=false;
       while(!q.empty())
       {
           Node* x=q.front();
           q.pop();
           if(x->left)
           {
               if(check||x->left->data>=x->data)return 0;  //if left null and right not then it is not heap
               q.push(x->left);
           }
           else check=true;
           if(x->right)
           {
               if(check||x->right->data>=x->data)return 0;
               q.push(x->right);
           }
           else check=true;
       }
       return true;
        
    }
};
