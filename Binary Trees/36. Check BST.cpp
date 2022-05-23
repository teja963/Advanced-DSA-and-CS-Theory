Node* prev=NULL;
	bool checkBST(Node* root) {
		if(!root)return true;
		bool f = checkBST(root->left);
		if(!f)return false;
		if(prev != NULL && prev->data >= root->data)return false;
		prev = root;
		f = checkBST(root->right);
		if(!f)return false;
		return true;
	}
