int traverse(Node* root,int &count,int X)
{
     if(!root)return 0;
     int l = traverse(root->left,count,X);
     int r = traverse(root->right,count,X);
     if(l + r + root->data == X)count++;
     return l + r + root->data;
    
}
int countSubtreesWithSumX(Node* root, int X)
{
	// Code here
	int count=0;
	traverse(root,count,X);
	return count;
}
