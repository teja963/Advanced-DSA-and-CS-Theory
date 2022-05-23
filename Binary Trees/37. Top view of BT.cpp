
    void topView(Node * root) {
       map<int,Node*>m;
       queue<pair<Node*,int>>q;
       q.push({root,0});
       while(!q.empty())
       {
           Node* x = q.front().first;
           int p = q.front().second;
           q.pop();
           if(x->left)q.push({x->left,p-1});
           if(x->right)q.push({x->right,p+1});
           m.insert({p,x});
       }
       for(auto x:m)cout<<x.second->data<<" ";
