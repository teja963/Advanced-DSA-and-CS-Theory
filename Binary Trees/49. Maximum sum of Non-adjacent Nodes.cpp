  //Function to return the maximum sum of non-adjacent nodes.
    pair<int,int> fun(Node* root)
    {
        if(!root)return {0,0};
        pair<int,int>sum1 = fun(root->left);
        pair<int,int>sum2 = fun(root->right);
        pair<int,int>ans;
        ans.first = root->data + sum1.second + sum2.second;  //If this root included its childrens are not
        ans.second = max(sum1.first, sum1.second) + max(sum2.first, sum2.second);
        return ans;
        
    }
    int getMaxSum(Node *root) 
    {
        // Add your code here
        auto x = fun(root);
        return max(x.first, x.second);
    }
