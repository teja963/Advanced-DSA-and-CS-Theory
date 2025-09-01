class Solution {
public:
    unordered_map<int, int>m;
    int bfs(int start, int dst){
       queue<int>q;
        q.push(start);
        set<int>visited; 
        visited.insert(start);
        int steps = 0;
        while(!q.empty())
        {
            int size = q.size();
            while(size--)
            {
                int curr = q.front();
                q.pop();
                if (curr == dst * dst) return steps;
                for (int next = curr + 1; next <= min(curr + 6, dst*dst); next++)
                {
                    int actualNext = m[next] > 0? m[next] : next; //jump to the next value
                    if (visited.find(actualNext) != visited.end()) continue;
                    visited.insert(actualNext);
                    q.push(actualNext);
                }
            }
            steps++;
        }
        return -1;
    }
    int snakesAndLadders(vector<vector<int>>& board) {
        int n = board.size();
        int count = 1, filp = 0;
        for(int i = n-1; i >= 0; i--){
            vector<int>tmp;
            for(int j = 0; j < n; j++){
                tmp.push_back(board[i][j]);
            }
            if(filp % 2 == 1)reverse(tmp.begin(), tmp.end());
            for(auto x: tmp){
                m.insert({count, x});
                count++;
            }
            filp++;
        }
        return bfs(1, n);
    }
};
