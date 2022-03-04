 long long fun(Node* root){
        if(!root)return 1;
        long long left = fun(root->left);
        long long right = fun(root->right);
        return root->data * max(left, right);
    }
    long long findMaxScore(Node* root)
    {
        // Your code goes here
        return fun(root);
    }
