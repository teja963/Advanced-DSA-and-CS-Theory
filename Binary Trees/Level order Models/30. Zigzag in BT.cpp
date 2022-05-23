class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>v;
        if(!root)return v;
        queue<TreeNode *>q;
        q.push(root);
        int i = 0;
        while(!q.empty()){
            int n = q.size();
            vector<int>s;
            while(n--){
                TreeNode *t=q.front();
                q.pop();
                s.push_back(t->val);
                if(t->left)q.push(t->left);
                if(t->right)q.push(t->right);
            }
            if(i & 1)reverse(s.begin(), s.end());
            v.push_back(s);  
            i++;
        }
        return v;
        
    }
