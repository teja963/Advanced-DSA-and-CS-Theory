class Solution
{
    public:
    int sum(Node* root)
    {
         if(!root)return 0;
         return root->data+sum(root->left)+sum(root->right);
        
    }
    bool isSumTree(Node* root)
    {
         // Your code here
         if(root){
         if(root->left==NULL&&root->right==NULL)return true;
         int left=sum(root->left);
         int right=sum(root->right);
         if(left+right!=root->data)return 0;
             isSumTree(root->left);
             isSumTree(root->right);
         }
         return true;
    }
