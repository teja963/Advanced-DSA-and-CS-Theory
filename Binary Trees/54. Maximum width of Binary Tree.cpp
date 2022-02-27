class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        int width = 0;
        queue<pair<TreeNode*, int>>q;
        q.push({root, 0});
        while(!q.empty()){
            int n = q.size();
            int max_index = INT_MIN, min_index = INT_MAX;
            while(n--){
                TreeNode* tmp = q.front().first;
                int dist = q.front().second;
                q.pop();
                max_index = max(max_index, dist);
                min_index = min(min_index, dist);
                if(tmp->left){
                    q.push({tmp->left, (long long)2 * dist + 1});
                }
                if(tmp->right){
                    q.push({tmp->right, (long long)2 * dist + 2});
                }
            }
            width = max(width, max_index - min_index + 1);
        }
        return width;   
    }
};
