  vector<int>v;
    bool isBST(Node* root) 
    {
        // Your code here
        if(root)
        {
            isBST(root->left);
            v.push_back(root->data);
            isBST(root->right);
        }
        for(int i=1,j=0;i<v.size();i++){if(v[j]!=v[i]&&v[j]<v[i])j++; else return false;}
        return true;
    }
};
