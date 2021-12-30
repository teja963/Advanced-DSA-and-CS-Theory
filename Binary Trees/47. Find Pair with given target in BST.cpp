bool inorder(struct Node* root,int target,unordered_set<int>&m)
    {
        if(!root)return false;
        if(inorder(root->left,target,m))return true;
        if(m.find(target-root->data) != m.end())return true;
        else m.insert(root->data);
        return inorder(root->right,target,m);
    }
    int isPairPresent(struct Node *root, int target)
    {
    //add code here.
        unordered_set<int>m;
        return inorder(root,target,m);
        
    }
};
