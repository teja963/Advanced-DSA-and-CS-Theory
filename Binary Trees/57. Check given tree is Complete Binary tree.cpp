class Solution{
public:    
    bool isCompleteBT(Node* root){
        //code here
        if(!root)return true;
        queue<Node*>q;
        q.push(root);
        bool check = false;
        while(!q.empty()){
                Node* tmp = q.front();
                q.pop();
                if(tmp->left){
                    if(!check)q.push(tmp->left);
                    else return false;
                }
                else check = true;
                if(tmp->right){
                    if(!check)q.push(tmp->right);
                    else return false;
                }
                else check = true;
        }
        return true;
    }
};
