 unordered_map<int,string>m;
    string tmp;
    void fun(int a[], int N, int id,vector<string>& ans)
    {
        if(tmp.size() == N)
        {
            ans.push_back(tmp);
            return ;
        }
        for(auto x:m[a[id]])
        {
            tmp.push_back(x);
            fun(a,N,id+1,ans);
            tmp.pop_back();
        }
    }
    vector<string> possibleWords(int a[], int N)
    {
        //Your code here
        vector<string>ans;
        m[2] = "abc";
        m[3] = "def";
        m[4] = "ghi";
        m[5] = "jkl";
        m[6] = "mno";
        m[7] = "pqrs";
        m[8] = "tuv";
        m[9] = "wxyz";
        fun(a,N,0,ans);
        return ans;
    }
};

