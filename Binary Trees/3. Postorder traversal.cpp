class Solution {
public:
    vector<int>v;
    vector<int> postorderTraversal(TreeNode* root) {
        if(root){
            postorderTraversal(root->left);
            postorderTraversal(root->right);
            v.push_back(root->val);
        }
        return v;
    }
   };
   
//Iterative
class Solution{
    public:
    vector<int> postOrder(Node* node) {
        // code here
        stack<Node*>s,ans;
        vector<int>v;
        if(!node)return v;
        s.push(node);
        while(!s.empty())
        {
                Node* x=s.top();
                s.pop();
                ans.push(x);
                if(x->left)s.push(x->left);
                if(x->right)s.push(x->right);
            
        }
        while(!ans.empty())
        {
            v.push_back(ans.top()->data);
            ans.pop();
        }
        return v;
    }
};
