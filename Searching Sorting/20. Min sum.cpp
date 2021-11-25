class Solution{   
public:
   string add(string s1,string s2)
   {
       string ans="";
       int i=0,j=0,carry=0,tmp;
       while(i<s1.size()&&j<s2.size())
       {
           tmp=0;
           tmp+=s1[i++]-'0';
           tmp+=s2[j++]-'0';
           tmp+=carry;
           ans+=(tmp%10)+'0';
           carry=tmp/10;
       }
       while(i<s1.size())
       {
           tmp=0;
           tmp+=s1[i++]-'0';
           tmp+=carry;
           ans+=(tmp%10)+'0';
           carry=tmp/10;
       }
       while(j<s2.size())
       {
           tmp=0;
           tmp+=s2[j++]-'0';
           tmp+=carry;
           ans+=(tmp%10)+'0';
           carry=tmp/10;   
       }
       while(carry)
       {
           ans+=(carry%10)+'0';
           carry/=10;
       }
       reverse(ans.begin(),ans.end());
       const regex pattern("^0+(?!$)");
       ans=regex_replace(ans,pattern,"");
       return ans;
   }
    string solve(int arr[], int n) {
        // code here
        sort(arr,arr+n);
        string s1,s2,ans;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)s1+=arr[i]+'0';
            else s2+=arr[i]+'0';
        }
        reverse(s1.begin(),s1.end());
        reverse(s2.begin(),s2.end());
        ans=add(s1,s2);
        return ans;
    }
};
