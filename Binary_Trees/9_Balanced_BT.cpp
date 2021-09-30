int ht(TreeNode* root){
    if(!root)return 0;
    else return 1+max(ht(root->left),ht(root->right));
}
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(!root)return true;
        return isBalanced(root->left)&&isBalanced(root->right)&&(abs(ht(root->left)-ht(root->right))<=1);
        
    }
