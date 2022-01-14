class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
       vector<vector<int>>dp(n+1, vector<int>(n+1,0));
       int max_length = 1,start = 0;
       for(int i = 0; i < n; i++)
       {
           dp[i][i] = 1;   //diagonal elements of length 1
       }
       for(int i = 0; i < n-1; i++)
       {
           if(s[i] == s[i+1])
           {
               dp[i][i+1] = 1;  //elements of length 2
               start = i;
               max_length = 2;
           }
       }
        //now checking length greater than 2
       for(int i = 3; i <= n; i++)
       {
           for(int j = 0; j < n-i+1; j++)
           {
               int end = j + i - 1;
               if(s[j] == s[end] && dp[j+1][end-1] == 1) //checking palindrome or not in O(1)
               {
                   dp[j][end] = 1;
                   if(i > max_length)
                   {
                       start = j;
                       max_length = i; 
                   }
               }
           }
       }
    return s.substr(start,max_length);
        
       
    }
};
