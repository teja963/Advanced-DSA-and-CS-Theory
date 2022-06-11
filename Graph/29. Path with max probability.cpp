class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        vector<pair<int, double>>adj[n];
        vector<int>visited(10000, 0);
        for(int i = 0; i < edges.size(); i++){
            adj[edges[i][0]].push_back({edges[i][1], succProb[i]});
            adj[edges[i][1]].push_back({edges[i][0], succProb[i]});
        }
        vector<double>p(n ,0.0);
        p[start] = 1.0;
        queue<int>q;
        q.push(start);
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            for(auto x: adj[curr]){
                if(p[x.first] < p[curr] * x.second){
                    q.push(x.first);
                    p[x.first] = p[curr]*x.second;
                }
            }
        }
        return p[end];                               
    }
};
