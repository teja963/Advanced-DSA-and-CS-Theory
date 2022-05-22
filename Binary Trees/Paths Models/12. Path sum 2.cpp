class Solution {
public:
    void fun(TreeNode* root,int k,vector<int>&v, vector<vector<int>>&v1)
    {
        if(!root)return;
        k -= root->val;
        v.push_back(root->val);
        if(!root->left && !root->right && k == 0)v1.push_back(v);
        fun(root->left,k,v,v1);
        fun(root->right,k,v,v1);
        v.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>v1;
        vector<int>v;
        if(!root)return v1;
        fun(root,targetSum,v,v1);
        return v1;
    }
