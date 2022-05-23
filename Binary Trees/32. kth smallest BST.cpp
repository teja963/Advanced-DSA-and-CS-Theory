class Solution {
public:
    int ans = 0, n;
    void preorder(TreeNode* root){
        if(root){
        	preorder(root->left);
       		if(--n == 0 && ans == 0)ans=root->val;
        	preorder(root->right);
    	}
    }
    int kthSmallest(TreeNode* root, int k) {
       n = k;
       preorder(root);;
       return ans;
    }
