class Solution {
public:
    int ans=0;
    void sum(TreeNode* root,string s){
        if(!root)return;
        s += to_string(root->val);
        if(!root->left && !root->right)ans += stoi(s);
        sum(root->left,s);
        sum(root->right,s);
    }
    int sumNumbers(TreeNode* root) {
        sum(root,"");
        return ans;
            
    }
