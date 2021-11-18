class Solution{
    public:
    string convert(string s, int n) {
        //code
        if(n<=1)return s;      //base condition
        vector<string>v(n);
        string ans,tmp;
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            v[count]+=s[i];
            if(count==0)tmp="down";
            if(count==n-1)tmp="up";
            if(tmp=="down")
            {
                count++;
            }
            else count--;
        }
        for(auto x:v)ans+=x;
        return ans;
        
    }
};
