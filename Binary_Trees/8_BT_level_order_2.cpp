class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>v1;
        if(!root)return v1;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            vector<int>v;
            while(n--)
            {
                TreeNode* temp=q.front();
                v.push_back(temp->val);
                q.pop();
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
            }
            v1.push_back(v);
        }
        reverse(v1.begin(),v1.end());
        return v1;
    }
