class Solution {
public:
    int ans=0;
    int solve(TreeNode* root)
    {
        if(!root)return 0;
        int l = solve(root->left);
        int r = solve(root->right);
        ans += abs(l-r);
        return l + r + root->val;
    }
    int findTilt(TreeNode* root) {
        if(!root)return 0;
        solve(root);
        return ans;
    }
