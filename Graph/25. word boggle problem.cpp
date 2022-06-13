    vector<string>ans;
    vector<pair<int,int>> p={{0,1},{1,0},{0,-1},{-1,0},{-1,-1},{1,1},{-1,1},{1,-1}};
    bool dfs(int i, int j, vector<vector<char>>&board, string tmp, int k){
        if(k == tmp.size())return true;
        if(i < 0 || j < 0 || i >= board.size() || j >= board[0].size() || board[i][j] != tmp[k])return false;
        char ch = board[i][j];
        board[i][j] = '.';
		    for(auto x: p){
		        if(dfs(i + x.first, j + x.second, board, tmp, k+1)){
		            board[i][j] = ch;
		            return true;
		        }
		    }
		board[i][j] = ch;
        return false;
    }
    bool search(vector<vector<char>>&v, string tmp){
        for(int i = 0; i < v.size(); i++){
            for(int j = 0; j < v[0].size(); j++){
                if(dfs(i, j, v, tmp, 0))return true;
            }
        }
        return false;
    }
	vector<string> wordBoggle(vector<vector<char> >& board, vector<string>& dictionary) {
	    // Code here
	    for(auto x: dictionary){
	        if(search(board, x))ans.push_back(x);
	    }
	    return ans;
	}
};
