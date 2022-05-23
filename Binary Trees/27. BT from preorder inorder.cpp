class Solution {
public:
    unordered_map<int,int>m;
    int i = 0;
    TreeNode* cost(vector<int>&pre,int l, int h){
        if(l > h)return NULL;
        int x = pre[i];
        TreeNode* root = new TreeNode(x);
        i++;
        int p = m[x];
        root->left = cost(pre, l, p-1);
        root->right = cost(pre, p+1, h);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i = 0; i < inorder.size(); i++)m[inorder[i]] = i;
        TreeNode* root=cost(preorder,0,inorder.size()-1);
        return root;
    }
};
