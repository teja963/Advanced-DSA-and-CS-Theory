class Solution{
public:
    int eulerPath(int N, vector<vector<int>> graph){
        // code here
        int odd_vertices = 0;
        for(int i = 0; i < N; i++){
            int count = 0;
            for(int j = 0; j < N; j++){
                if(graph[i][j])count++;
            }
            if(count & 1)odd_vertices++;
        }
        return odd_vertices == 2;
    }
};
