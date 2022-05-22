class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int>v;
        if(!root)return v;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            int s=INT_MIN;
            while(n--){
                TreeNode* t=q.front();
                q.pop();
                s=max(s,t->val);
                if(t->left)q.push(t->left);
                if(t->right)q.push(t->right);
            }
            v.push_back(s);
        }
        return v;
    }
