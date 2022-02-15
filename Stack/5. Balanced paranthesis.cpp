class Solution {
public:
    bool isValid(string s) {
        if(s.size() % 2 != 0)return false;         //Base case 1
        if(s[0] == ')' || s[0] == '}' || s[0] == ']')return false; //Base case 2
        stack<char>st;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[' )st.push(s[i]);
            else
            {
                if(st.size() > 0)
                {
                    char tmp;
                    if(s[i] == ')')tmp = '(';
                    else if(s[i] == '}')tmp = '{';
                    else if(s[i] == ']')tmp = '[';
                    if(tmp != st.top())return false;
                    st.pop();
                }
                else return false;
            }
        }
        return st.size() == 0;
    }
};
