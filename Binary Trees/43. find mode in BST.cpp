 TreeNode* prev=NULL;
    int count = 1,max_f = INT_MIN;
    vector<int>v;
    void inorder(TreeNode* root)
    {
        if(root)
        {
            inorder(root->left);
            if(prev && prev->val==root->val)count++;
            else
            {
                count=1;
                prev = root;
            }
            if(max_f < count){
                v.clear();
                v.push_back(root->val);
                max_f = count;
            }
            else if(max_f == count)v.push_back(root->val);
                
            
            inorder(root->right);
        }
    }
    vector<int> findMode(TreeNode* root) {
        inorder(root);
        return v;
    }
};
