class Solution
{
    public:
    int ans = 1;
    int fun(Node* root){
        if(!root)return 0;
        int l = fun(root->left);
        int r = fun(root->right);
        if(root->left and root->right and root->data != l + r){
            ans = 0;
        } 
        return l + r + root->data;
        
    }
    bool isSumTree(Node* root)
    {
         // Your code here
         if(!root)return true;
         fun(root);
         return ans;
    }
};
