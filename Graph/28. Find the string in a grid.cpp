    vector<pair<int, int>>p = {{0, 1}, {1, 1}, {1, 0}, {1, -1}, {0, -1}, {-1, -1}, {-1, 0}, {-1, 1}};
    bool dfs(int i, int j, string word, vector<vector<char>>&g, int k, int x, int y){
        if(k == word.size())return true;
        if(i < 0 || j < 0 || i >= g.size() || j >= g[0].size() || word[k] != g[i][j])return false;
        return dfs(i + x, j + y, word, g, k+1, x, y);
    }
	vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
	    // Code here
	    vector<vector<int>>v;
	    for(int i = 0; i < grid.size(); i++){
	        for(int j = 0; j < grid[0].size(); j++){
	            if(grid[i][j] == word[0]){
	                for(auto x: p){
	                    if(dfs(i + x.first, j + x.second, word, grid, 1, x.first, x.second)){
	                        v.push_back({i, j});
	                        break;
	                    }
	                }
	            }
	        }
	    }
	    return v;
	}
};
