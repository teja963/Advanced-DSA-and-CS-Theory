class Solution {
public:
    TreeNode* build(vector<int>&v,int l,int h){
        if(l > h)return NULL;
        int m = (l+h)/2;
        TreeNode* root = new TreeNode(v[m]);
        root->left = build(v, l, m-1);
        root->right = build(v, m+1, h);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
      return build(nums, 0, nums.size()-1);
    }
