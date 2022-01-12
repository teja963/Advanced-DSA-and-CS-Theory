class Solution {
public:
    bool check(TreeNode* root1,TreeNode* root2)       //check both trees are same or not function
    {
        if(!root1 && !root2)return true;
        if(!root1 || !root2)return false;
        if(root1->val != root2->val)return false;
        return check(root1->left,root2->left) && check(root1->right,root2->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root && !subRoot)return true;
        if(!root || !subRoot)return false;
        if(root->val == subRoot->val)                   //if node values of both trees matches verify same or not
        {
            if(check(root,subRoot))return true;
        }
        return (isSubtree(root->left,subRoot)||isSubtree(root->right,subRoot))  //verify each node recursivel
    }
