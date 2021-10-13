class Solution {
public:
    int nextGreaterElement(int n) {
         string s=to_string(n);
        if(next_permutation(s.begin(),s.end())){
            if(stoll(s)>pow(2,31)-1)return -1;
            return stoi(s);
        }
        return -1;
    }
