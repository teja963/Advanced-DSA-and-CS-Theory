 int fun(node* root)
    {
        if(root)
        {
            int l = fun(root->left);
            int r = fun(root->right);
            if(!root->left && !root->right)return stoi(root->data);
            if(root->data == "+")return l+r;
            if(root->data == "-")return l-r;
            if(root->data == "*")return l*r;
            if(root->data == "/")return l/r;
        }
    }
