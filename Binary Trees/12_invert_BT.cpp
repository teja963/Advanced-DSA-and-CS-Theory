class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
       if(!root)return root;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
           TreeNode* temp=q.front();
            q.pop();
            if(temp->left)q.push(temp->left);
            if(temp->right)q.push(temp->right);
            swap<TreeNode*>(temp->left,temp->right);
        }
        return root;
    }
