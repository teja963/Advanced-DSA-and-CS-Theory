class Solution
{
  public:
    vector<int> findOrder(int n, int m, vector<vector<int>> prerequisites) 
    {
        //code here
        vector<int>graph[n];
        vector<int>indeg(n), ans;
        for(int i = 0; i < m; i++){
            graph[prerequisites[i][1]].push_back(prerequisites[i][0]);
            indeg[prerequisites[i][0]]++;
        }
        queue<int>q;
        for(int i = 0; i < n; i++){
            if(indeg[i] == 0)q.push(i);
        }
        if(q.size() == 0)return ans; //base case
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            ans.push_back(curr);
            for(auto x: graph[curr]){
                indeg[x]--;
                if(indeg[x] == 0)q.push(x);
            }
        }
        if(ans.size() == n)return ans;
        return { }; 
        
    }
};
