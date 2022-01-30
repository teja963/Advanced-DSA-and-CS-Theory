class Solution {
public:
    string increment(string s)
    {
        int carry = 1;
        for(int i = s.size()-1; i >= 0; i--)
        {
            int x = s[i] - '0' + carry;
            carry = x/2;
            x %= 2;
            if(x == 0)s[i] = '0';
            else s[i] = '1';
        }
        if(carry)s = "1" + s;
        return s;
    }
    
    int numSteps(string s) {
      int ans = 0;
      while(s.size() != 1)
      {
          if(s[s.size() - 1] == '1')
          {
              s = increment(s);
          }
          else
          {
              s.pop_back();
          }
          ans++;
      }
        return ans;
    }
   
};
