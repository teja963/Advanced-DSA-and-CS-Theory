//1
//11
//21
//1211

class Solution {
public:
    string countAndSay(int n) {
        string s,a;
        int i,j,k;
        if(n==1)return "1";
        if(n==2)return "11";
        else{
           s="11";
        for(i=3;i<=n;i++){
            s+='$';
               k=1;
              a="";
            for(j=1;j<s.size();j++){
                if(s[j]==s[j-1])k++;
                else{
                    a+=k+'0';
                    a+=s[j-1];
                    k=1;
                }
            }
            s=a;
        }
        return s;}
    }
        
    
