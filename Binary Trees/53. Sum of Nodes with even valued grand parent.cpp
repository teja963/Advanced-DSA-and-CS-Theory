class Solution {
public:
    int ans;
    void fun(TreeNode* root, int parent = -1, int gparent = -1)
    {
        if(!root)return;
        if(gparent % 2 ==0)ans += root->val;
        fun(root->left, root->val, parent);
        fun(root->right, root->val, parent);
    }
    int sumEvenGrandparent(TreeNode* root) {
        ans = 0;
        fun(root);   
        return ans;
    }
};
