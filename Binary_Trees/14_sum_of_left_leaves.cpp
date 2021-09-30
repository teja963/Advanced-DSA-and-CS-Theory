class Solution {
public:
    int ans=0;
    void check(TreeNode* root)
    {
        if(!root)return;     
        if(root->left){
            if(!root->left->left&&!root->left->right)ans+=root->left->val;
            else check(root->left);
        }
        if(root->right)check(root->right);
        
    }
    int sumOfLeftLeaves(TreeNode* root) {
        check(root);
        return ans;
    }
