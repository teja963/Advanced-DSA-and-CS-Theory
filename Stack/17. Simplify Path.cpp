class Solution {
public:
    string simplifyPath(string path) {
        string ans;
        stack<string>s;
        for(int i = 0; i < path.size(); i++){
            if(path[i] == '/')continue;
            string tmp;
            while(i < path.size() and path[i] != '/'){
                tmp += path[i++];
            }
            if(tmp == ".")continue;
            else if(tmp == ".."){
                if(s.size() > 0)s.pop();
            }
            else{
                s.push(tmp);
            }
        }
        while(s.size()){
            ans = '/' + s.top() + ans;
            s.pop();
        }
        if(ans.size() == 0)return "/";
        return ans;
    }
};
