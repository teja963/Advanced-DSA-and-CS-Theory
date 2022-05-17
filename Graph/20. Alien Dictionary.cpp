class Solution{
    public:
    string findOrder(string dict[], int N, int K) {
        //code here
        vector<int>adj[K];
        vector<int>indeg(K, 0);
        for(int i = 0; i < N-1; i++){       //getting indeg and relations
            string s1 = dict[i];
            string s2 = dict[i+1];
            int j = 0, k = 0;
            while(j < s1.size() and k < s2.size()){
                if(s1[j] != s2[k]){
                    adj[s1[j] - 'a'].push_back(s2[k] - 'a');
                    indeg[s2[k] - 'a']++;
                    break;
                }
                j++;
                k++;
            }
        }
        queue<int>q;                     //starting from node having indegree 0
        for(int i = 0; i < K; i++){
            if(indeg[i] == 0){
                q.push(i);
            }
        }
        string ans = "";         //travelling through bfs
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            for(auto x: adj[curr]){
                indeg[x]--;
                if(indeg[x] == 0)q.push(x);
            }
            ans += curr + 'a';
        }
        
        return ans;
        
    }
};
