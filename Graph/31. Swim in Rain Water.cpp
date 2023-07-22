class Solution {
public:
    #define pp pair<int, pair<int, int>>
    int x[4] = {-1, 0, 1, 0};
    int y[4] = {0, 1, 0, -1};
    int n;
    bool valid(int i, int j){
        if(i >= 0 && j >= 0 && i < n && j < n)return true;
        return false;
    }
    int swimInWater(vector<vector<int>>& grid) {
        bool visi[51][51];
        memset(visi, 0, sizeof(visi));
        priority_queue<pp, vector<pp>, greater<pp>>pq;
        pq.push({grid[0][0], {0, 0}});
        visi[0][0] = 1;
        n = grid.size();
        while(!pq.empty()){
            auto tmp = pq.top();
            pq.pop();
            int t = tmp.first;
            int i = tmp.second.first;
            int j = tmp.second.second;
            if(i == n-1 && j == n-1)return t;
            for(int k = 0; k < 4; k++){
                int new_i = x[k] + i;
                int new_j = y[k] + j;
                if(valid(new_i, new_j) && visi[new_i][new_j] != 1){
                    visi[new_i][new_j] = 1;
                    if(grid[new_i][new_j] <= t){
                        pq.push({t, {new_i, new_j}});
                    }
                    else{
                        pq.push({grid[new_i][new_j], {new_i, new_j}});
                    }
                }
            }
        }
        return 0;
    }
};
