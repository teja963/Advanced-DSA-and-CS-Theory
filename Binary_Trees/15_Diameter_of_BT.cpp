class Solution {
public:
    int ans=0;
    int ht(TreeNode* root)
    {
        if(!root)return 0;
        int l=ht(root->left);
        int r=ht(root->right);
        ans=max(ans,l+r);
        return 1+max(l,r);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root)return 0;
        ht(root);
        return ans;
    }
