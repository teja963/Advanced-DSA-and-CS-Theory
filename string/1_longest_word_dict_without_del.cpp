//Input: s = "abpcplea", dictionary =["ale","apple","monkey","plea"]
//Output: "apple"

//Input: s = "abpcplea", dictionary = ["a","b","c"]
//Output: "a"
class Solution {
public:
    static bool cmp(string &a,string &b){
        if(a.size()==b.size())return a<b;
        return a.size()>b.size();
    }
    
    bool contain(string &s,string &a){ 
        if(s.size()<a.size())return false;
        int i=0;
        for(auto x:s){
            if(i<a.size()&&a[i]==x)i++;
        }
        if(i==a.size())return true;
        return false;
    }
    string findLongestWord(string s, vector<string>& dictionary) {
       sort(dictionary.begin(),dictionary.end(),cmp);
       int i=0;
       for(i=0;i<dictionary.size();i++){
           if(contain(s,dictionary[i]))return dictionary[i];
       }
        return "";
    }
