vector<int> Kdistance(struct Node *root, int k)
{
  // Your code here
  queue<Node*>q;
  q.push(root);
  vector<int>v;
  int dist=0;
  while(!q.empty())
  {
      int size=q.size();
      while(size--)
      {
          Node* x=q.front();
          q.pop();
          if(x->left)q.push(x->left);
          if(x->right)q.push(x->right);
          if(dist==k)v.push_back(x->data);
      }
      dist++;
  }
  return v;
  
}
