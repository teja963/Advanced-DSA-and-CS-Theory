class Solution {
public:
    vector<int>v;
    vector<int> inorderTraversal(TreeNode* root) {
        if(root){
        inorderTraversal(root->left);
        v.push_back(root->val);
        inorderTraversal(root->right);
    }
        return v;
    }
};

// iterative solution
class Solution {
public:
    vector<int> inOrder(Node* root)
    {
        //code here
        stack<Node*>s;
        vector<int>v;
        Node* curr=root;
        while(!s.empty()||curr)
        {
           if(curr)
           {
               s.push(curr);
               curr=curr->left;
           }
           else
           {curr=s.top();
           v.push_back(curr->data);
           s.pop();
           curr=curr->right;
        }}
        return v;
    }
};    
