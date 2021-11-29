class Solution {
public:
     vector<vector<string>>ans;
        vector<string>tmp;
    void fun(string s)
    {
        if(s.size()==0)
        {
            ans.push_back(tmp);
            return ;
        }
        for(int i=0;i<s.size();i++)
        {
            string t=s.substr(0,i+1);
            if(t==string(t.rbegin(),t.rend()))
            {
                tmp.push_back(t);
                fun(s.substr(i+1));
                tmp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        fun(s);
        return ans;
    }
};
