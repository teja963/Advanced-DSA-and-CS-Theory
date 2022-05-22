bool check(TreeNode* p,TreeNode* q){
    if(!p && !q)return true;
    if(!p || !q)return false;
    if(p->val != q->val)return false;
    return check(p->left, q->right) && check(p->right,q->left);
}
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        TreeNode* p=root,*q=root;
        return check(p->left,q->right);
    }
