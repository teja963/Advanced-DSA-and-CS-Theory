class Solution {
public:
    string reverseWords(string s) {
       string ans ="";
        string words ="";
       for(int i =s.length()-1;i>=0;i--){
           if(s[i]!= ' '){
               words =s[i]+words;
           }else if(s[i]==' ' && words.length()>0){
               ans+=words;
               ans+=' ';
               words="";
           }
       }
        ans+=words;
        int  j=ans.length()-1;
        while(j>=0 && ans[j]==' ')j--;
        ans =ans.substr(0,j+1);
        return ans;
    }
};
