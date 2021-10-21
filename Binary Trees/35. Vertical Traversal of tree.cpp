class Solution
{
    public:
    //Function to find the vertical order traversal of Binary Tree.
    vector<int> verticalOrder(Node *root)
    {
        //Your code here
        vector<int>ans;
        map<int,vector<int>>m;   //idea for storing
        queue<pair<Node*,int>>q;
        q.push({root,0});  //for storing root values for particular vertical lines identification purpose
        while(!q.empty())
        {
            Node *t=q.front().first;
            int d=q.front().second;
            q.pop();
            m[d].push_back(t->data);          //stores values according to that vertical lines
            if(t->left)q.push({t->left,d-1});
            if(t->right)q.push({t->right,d+1});
        }
        for(auto x:m)
        {
            for(auto y:x.second)ans.push_back(y);
        }
        return ans;
    }
