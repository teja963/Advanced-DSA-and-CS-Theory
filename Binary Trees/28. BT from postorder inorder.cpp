class Solution {
public:
    unordered_map<int,int>m;
    int i;
    TreeNode* cost(vector<int>&post,int l,int h){
        if(l > h || i < 0)return NULL;
         int x = post[--i];
        TreeNode* root=new TreeNode(x);   
        int p = m[x];
        root->right = cost(post, p+1, h);
        root->left = cost(post, l, p-1);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        for(i = 0; i < inorder.size(); i++)m[inorder[i]] = i;
        TreeNode* root = cost(postorder, 0, inorder.size()-1);
        return root;
    }
