struct Node* construct(int pre[],int &l,int h,char preLN[])
{
        if(l>h)return NULL;
        Node* root = new Node(pre[l]);
        if(preLN[l++]=='N')
        {
            root->left=construct(pre,l,h,preLN);
            root->right=construct(pre,l,h,preLN);
        }
        return root;

}
struct Node *constructTree(int n, int pre[], char preLN[])
{
    // Code here
    int l = 0;
    return construct(pre, l, n-1, preLN);
}
