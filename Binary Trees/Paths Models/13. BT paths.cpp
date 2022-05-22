class Solution {
public:
    vector<string>v;
    void sum(TreeNode* root,string s){
        if(!root)return;
        s += to_string(root->val);
        if(!root->left && !root->right)v.push_back(s);
        else s += "->";
        sum(root->left,s);
        sum(root->right,s);
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
          sum(root,"");
          return v;
    }
