class Solution {
  public:
  vector<int>v;
  void inorder(Node* root, int low, int high)
  {
      if(root)
      {
          inorder(root->left,low,high);
          if(root->data >= low && root->data <= high)v.push_back(root->data);
          inorder(root->right,low,high);
      }
  }
    vector<int> printNearNodes(Node *root, int low, int high) {
        //code here  
        inorder(root,low,high);
        return v;
    }
