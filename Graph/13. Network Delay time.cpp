class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int,int>>>v(n+1);
        for(int i = 0; i < times.size(); i++){
            v[times[i][0]].push_back({times[i][1], times[i][2]});
        }
        vector<int>signal(n+1, INT_MAX);
        signal[k] = 0;
        queue<int>q;
        q.push(k);
        while(!q.empty()){
            int currnode = q.front();
            q.pop();
            for(pair<int,int>p: v[currnode]){
                int neighbour = p.first;
                int time = p.second;
                int arrival = signal[currnode] + time;
                if(signal[neighbour] > arrival){
                    signal[neighbour] = arrival;
                    q.push(neighbour);
                }
            }
        }
        int ans = 0;
        for(int i = 1; i <= n; i++){
            if(signal[i] == INT_MAX)return -1;
            ans = max(ans, signal[i]);
        }
        return ans;
    }
};
