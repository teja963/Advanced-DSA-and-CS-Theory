void inorder_modify(Node* root,int &sum)
{
    if(!root)return;
    inorder_modify(root->right,sum);
    root->data = root->data + sum;
    sum = root->data;
    inorder_modify(root->left,sum);
}
Node* modify(Node *root)
{
    // Your code here
    if(!root)return root;
    int sum = 0;
    inorder_modify(root,sum);
    return root;
    
}
