class Solution {
public:
    #define pp pair<int, pair<int, int>>
    int trapRainWater(vector<vector<int>>& heightMap) {
        int m = heightMap.size();
        int n = heightMap[0].size();
        priority_queue<pp, vector<pp>, greater<pp>>pq;
        bool visited[201][201];
        memset(visited, false, sizeof(visited));
        int x[4] = {-1, 0, 1, 0};
        int y[4] = {0, 1, 0, -1};
        //Pushing boundaries top and bottom
        for(int i = 0; i < n; i++){
            pq.push({heightMap[0][i],{0, i}});
            pq.push({heightMap[m-1][i],{m-1, i}});
            visited[0][i] = true;
            visited[m-1][i] = true;        
        }
        //Pushing boundaries left and right sides
        for(int i = 0; i < m; i++){
            pq.push({heightMap[i][0],{i, 0}});
            pq.push({heightMap[i][n-1],{i, n-1}});
            visited[i][0] = true;
            visited[i][n-1] = true;
        }
        //Filling the inner cells based on boundaries
        int ans = 0;
        while(!pq.empty()){
            auto tmp = pq.top();
            pq.pop();
            int hgt = tmp.first;
            int row = tmp.second.first;
            int col = tmp.second.second;
            for(int i = 0; i < 4; i++){
                int n_row = row + x[i];
                int n_col = col + y[i];
                if(n_row > 0 && n_row < m && n_col > 0 && n_col < n && !visited[n_row][n_col]){
                    visited[n_row][n_col] = true;
                    //If inner cell is less than the boundary, the add to it
                    if(heightMap[n_row][n_col] < hgt)ans += hgt - heightMap[n_row][n_col];

                    pq.push({max(hgt, heightMap[n_row][n_col]), {n_row, n_col}});
                }
            }
        }
        return ans;
    }
};
