   string longestPalindrome(string S){
        // code here 
        string ans,tmp;
        int n=S.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                tmp=S.substr(i,j-i+1);
                if(tmp==string(tmp.rbegin(),tmp.rend())&&tmp.size()>ans.size())ans=tmp;
            }
        }
        return ans;
