class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int>v(26,0);
        vector<int>ans;
        for(int i = 0; i < s.size(); i++){
            v[s[i] - 'a'] = i;
        }
        int maxi = 0, prev = -1;
        for(int i = 0; i < s.size(); i++){
            maxi = max(maxi, v[s[i] - 'a']);
            if(maxi == i){
                ans.push_back(maxi-prev);
                prev = maxi;
            }
        }
        return ans;
    }
};
