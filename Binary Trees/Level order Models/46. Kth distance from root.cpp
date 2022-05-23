//bfs
vector<int> Kdistance(struct Node *root, int k)
{
  // Your code here
  queue<Node*>q;
  q.push(root);
  vector<int>v;
  int dist = 0;
  while(!q.empty())
  {
      int size = q.size();
      while(size--)
      {
          Node* x = q.front();
          q.pop();
          if(x->left)q.push(x->left);
          if(x->right)q.push(x->right);
          if(dist == k)v.push_back(x->data);
      }
      dist++;
  }
  return v;
  
}

//dfs
int distance(vector<int> v,Node* root,int k){
    if(root==NULL){
        return 0;
    }
    if(k == 0){
       v.push_back(root->data);
    }
    distance(v,root->left,k-1);
    distance(v,root->right,k-1);
}
vector<int> Kdistance(struct Node *root, int k)
{
    vector<int> v;
  distance(v,root,k);
  return v;
}
