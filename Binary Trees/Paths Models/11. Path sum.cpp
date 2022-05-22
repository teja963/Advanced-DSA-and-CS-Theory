class Solution {
public:
    bool ans = false;
    void psum(TreeNode* root,int k,int s)
    {
        if(!root)return;
        s += root->val;
        if(!root->left && !root->right)if(s == k)ans = true;
        psum(root->left, k, s);
        psum(root->right, k, s);
        
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
       psum(root, targetSum, 0);
        return ans;}
