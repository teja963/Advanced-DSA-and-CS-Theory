class Solution {
public:
    void generate(vector<string>&ans,string tmp,int open,int close)
    {
        if(open == 0 && close == 0)
        {
            ans.push_back(tmp);
            return;
        }
        else
        {
		    if(open)generate(ans,tmp+'(',open-1,close+1);
		    if(close)generate(ans,tmp+')',open,close-1);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string tmp;
        generate(ans,tmp,n,0);
        return ans;
    }
};
