class Solution {
public:
    TreeNode* r = NULL;
    void flatten(TreeNode* root) {
        if(!root)return;
        flatten(root->right);
        flatten(root->left);
        root->right = r;
        root->left = NULL;
        r = root;
    }
