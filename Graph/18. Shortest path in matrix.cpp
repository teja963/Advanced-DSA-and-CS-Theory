class Solution {
public:

    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int dirx[8] = {0, 0, 1, -1, 1, 1, -1, -1};
	    int diry[8] = {1, -1, 0, 0, -1, 1, -1, 1};
        int n = grid.size();
        if(grid[0][0] != 0 || grid[n-1][n-1] != 0)return -1;
        queue<pair<int,int>>q;
        q.push({0, 0});
        int steps = 0;
        while(!q.empty()){
            int size = q.size();
            steps++;
            while(size--){
                 auto x = q.front();
                 q.pop();
                
                 if(x.first == n-1 && x.second == n-1){
                        return steps;
                }
                for(int i = 0; i < 8; i++){
                    int new_x = dirx[i] + x.first;
                    int new_y = diry[i] + x.second;
                    
                    if(new_x >= 0 && new_y >= 0 && new_x < n && new_y < n && grid[new_x][new_y] == 0){
                        grid[new_x][new_y] = 1;
                        q.push({new_x, new_y});
                    }
                }   
            }
        }
        return -1;
    }
};
