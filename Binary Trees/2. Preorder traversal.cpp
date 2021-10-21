
class Solution {                            //Recursive 
public:
    vector<int>v;
    vector<int> preorderTraversal(TreeNode* root) {
        if(root){
            v.push_back(root->val);
            preorderTraversal(root->left);
            preorderTraversal(root->right);
        }
        return v;
    }
    
class Solution{                              //Iterative
    public:
    vector<int> preOrder(Node* root)
    {
        //code here
        stack<Node*>s;
        vector<int>v;
        s.push(root);
        while(!s.empty())
        {
            Node* x=s.top();
            s.pop();
            v.push_back(x->data);
            if(x->right)s.push(x->right);
            if(x->left)s.push(x->left);
           
        }
        return v;
    }
};
