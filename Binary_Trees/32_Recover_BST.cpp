class Solution {
public:
    vector<pair<TreeNode*,TreeNode*>>v;
    TreeNode* prev=NULL;
    void solve(TreeNode* root){
        if(!root)return;
        solve(root->left);
        if(prev&&prev->val>root->val)v.push_back({prev,root});
        prev=root;
        solve(root->right);
    }
    void recoverTree(TreeNode* root) {
     solve(root);
         /* If just 2 adjacent nodes violated BST , than there will be 1 key value pair in           
		vec and we will swap it and problem is solved */
     if(v.size()==1)swap(v[0].first->val,v[0].second->val);
         /* We know its given in question that only 2 nodes of the tree were swapped, but what if those 2 nodes are not adjacent, in that case 
		we have 2 key value pairs which shows there is irregularity in 4 elements. (so size of vec is 2). eg: 1 2 3 4 , we change it to : 4 2 3 1 
		which leads to inconsistency in {4,2} and {3,1} so to solve it we swap first of 0th and second of 1th which are 4 and 1 respectively, 
		we can get 1 2 3 4 back, same is done below : */
     if(v.size()==2)swap(v[0].first->val,v[1].second->val);
    }
