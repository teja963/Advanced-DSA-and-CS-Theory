class Solution {
public:
    int countNodes(TreeNode* root) {
        if(root==NULL) return 0;
        return 1+countNodes(root->left)+countNodes(root->right);
    }
};
