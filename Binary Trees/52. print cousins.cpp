 vector<int> printCousins(Node* root, Node* node_to_find)
    {
        //code here
        vector<int>ans;
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            int n = q.size();
            int find = 0;
            while(n--)
            {
                Node* tmp = q.front();
                q.pop();
                if(tmp->left == node_to_find || tmp->right == node_to_find)find = 1;
                else
                {
                    if(tmp->left)q.push(tmp->left);
                    if(tmp->right)q.push(tmp->right);
                }
            }
            if(find)
            {
                while(!q.empty())
                {
                    ans.push_back(q.front()->data);
                    q.pop();
                }
            }
        }
        if(ans.size() == 0)ans.push_back(-1);
        return ans;
    }
