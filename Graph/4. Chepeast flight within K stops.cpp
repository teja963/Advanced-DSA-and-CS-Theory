class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<pair<int, int>>adj[101];
        int dp[101];
        for(int i = 0; i < n; i++){
            dp[i] = INT_MAX;
        }
        for(int i = 0; i < flights.size(); i++){
            adj[flights[i][0]].push_back({flights[i][1], flights[i][2]});

        }
        queue<pair<int, int>>q;
        q.push({src, 0});
        int stops = 0;
        while(!q.empty() && stops <= k){
            int n = q.size();
            while(n--){
                auto curr = q.front();
                q.pop();
                for(auto x: adj[curr.first]){
                    int ngb = x.first; int price = x.second;
                    if(dp[ngb] > curr.second + price){
                        dp[ngb] = curr.second + price;
                        q.push({ngb, dp[ngb]});
                    }
                }
            }
            stops++;
        }
        return dp[dst] == INT_MAX? -1: dp[dst];
    }
};
