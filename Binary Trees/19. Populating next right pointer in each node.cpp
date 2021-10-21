class Solution {
public:
    Node* connect(Node* root) {
  if(!root)
            return root;
        queue<Node *> q;
        q.push(root);
        q.push(NULL);
        while(q.front())
        {
            int s=q.size()-1;
            while(s--)
            {
                Node *node=q.front();
                q.pop();
                node->next=q.front();
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            q.pop();
            q.push(NULL);
        }
        return root;
    }
