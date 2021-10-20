class Solution {
public:
    Node* connect(Node* root) {
      if(!root)return root;
      queue<Node*>q;
      q.push(root);
        q.push(NULL);
        while(q.front()){
            int n=q.size()-1;
            while(n--){
                Node* t=q.front();
                q.pop();
                t->next=q.front();
                if(t->left)q.push(t->left);
                if(t->right)q.push(t->right);
            }
            q.pop();
            q.push(NULL);
        }
        return root;
    }
