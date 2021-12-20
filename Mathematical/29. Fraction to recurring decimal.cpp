class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
         string ans;
        map<long long int,int>m;
        long long nm=numerator,dm=denominator;
        if(numerator==denominator)return "1";
        if((nm>0&&dm<0)||(nm<0&&dm>0))ans+='-';
        nm=abs(nm);
        dm=abs(dm);
        ans+=to_string(nm/dm);
        nm%=dm;
        if(nm>0)ans+='.';
        while(nm>0)
        {
              if(m.find(nm)!=m.end())
              {
                  ans=ans.substr(0,m[nm])+"("+ans.substr(m[nm])+")";
                  break;
              }
               m[nm]=ans.size();
               nm*=10;
               ans+=to_string(nm/dm);
               nm%=dm;
            
        }
       
        return ans;
    }
};
