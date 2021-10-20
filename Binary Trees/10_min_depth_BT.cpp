int f(TreeNode* root){
        if(!root)return INT_MAX;
        if(!root->left&&!root->right)return 1;
        return 1+min(f(root->left),f(root->right));
}
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(!root)return 0;
        return f(root);
    }
