 string ans;
    void fun(string s, int k, int start){
        ans = max(ans, s);
        if(k == 0)return;
        for(int i = start; i < s.size()-1; i++){
            for(int j = i+1; j < s.size(); j++){
                if(s[i] < s[j]){
                    swap(s[i], s[j]);
                    fun(s, k-1, i+1);
                    swap(s[i], s[j]);
                }
            }
        }
    }
    string findMaximumNum(string str, int k)
    {
       // code here
       fun(str, k, 0);
       return ans;
    }
