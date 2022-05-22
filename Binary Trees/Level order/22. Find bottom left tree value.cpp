class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        if(!root)return 0;
        queue<TreeNode*>q;
        q.push(root);
        int ans;
        while(!q.empty()){
            int n=q.size(),k=0;
            while(n--){
                TreeNode* t=q.front();
                q.pop();
                if(k==0){ans=t->val; k++;}
                if(t->left)q.push(t->left);
                if(t->right)q.push(t->right);
            }
        }
        return ans;
    }
