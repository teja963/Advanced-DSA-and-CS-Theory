class Solution {
public:
    int evalRPN(vector<string>& tokens) {
         stack<int>s;
        for(int i=0;i<tokens.size();i++)
        {
            string str=tokens[i];
            if(str!="+"&&str!="-"&&str!="*"&&str!="/")s.push(stoi(str));
            else
            {
                int c,ans=0;
                if(!s.empty()){
                    c=s.top();
                    s.pop();
                    if(str=="+")ans=c+s.top();
                    else if(str=="-")ans=s.top()-c;
                     else if(str=="*")ans=c*s.top();
                     else if(str=="/")ans=s.top()/c;
                    s.pop();
                    s.push(ans);
                }
                    
            }
        }
        return s.top();
    }
