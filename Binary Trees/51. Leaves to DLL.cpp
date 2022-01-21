Node* preorder(Node* root, Node*& head, Node*& prev)
{
        if(!root)return NULL;
        if(!root->left && !root->right)
        {
            if(!head)
            {
                head = prev = root;
            }
            else
            {
                prev->right = root;
                root->left = prev;
                prev = root;
            }
            return NULL;
        }
        root->left = preorder(root->left, head, prev);
        root->right = preorder(root->right, head, prev);
        return root;
    
}
Node * convertToDLL(Node *root){
    // add code here.
   if(!root)return NULL;
   Node* head = NULL;
   Node* prev = NULL;
   preorder(root,head,prev);
   return head;
}
