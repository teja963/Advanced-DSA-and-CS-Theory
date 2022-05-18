public:
    vector<string>ans;
    void fun(vector<char>&v, int l ,int h, string tmp){
        if(l + 1 > h){
            tmp += v[l];
            ans.push_back(tmp);
            return;
        }
        fun(v, l+1, h, tmp + v[l] + " ");
        fun(v, l+1, h, tmp + v[l]);
    }
    vector<string> permutation(string S){
        // Code Here
        vector<char>v(S.begin(), S.end());
        fun(v, 0, S.size()-1, "");
        return ans;
        
    }
};
