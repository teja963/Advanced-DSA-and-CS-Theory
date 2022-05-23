lass Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
        vector<int>ans;
        queue<pair<Node*,int>>q;   
        int i;
        map<int, int>m;
        q.push({root,0});
        while(!q.empty())
        {
            Node* x=q.front().first;
            int p = q.front().second;
            q.pop();
            if(x->left)q.push({x->left,p-1});
            if(x->right)q.push({x->right,p+1});
            m[p] = x->data;                //taking the bottom most value in vertical condition
        }
        
        for(auto x:m)ans.push_back(x.second);
        return ans;
    }
