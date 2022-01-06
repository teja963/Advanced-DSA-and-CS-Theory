class Solution {
public:
    int counterhelp(int n)
    {
        int ans  = 9;
        int choices = 9;
        for(int i = 2;i <= n; i++)
        {
            ans = ans * choices;
            choices--;
        }
        return ans;
    }
    int countNumbersWithUniqueDigits(int n) {
        
      if(n == 0)return 1;
        int ans  = 10;
        for(int i = 2; i <= n;i++)
        {
            ans = ans + counterhelp(i);
        }
        return ans;
    }
};
