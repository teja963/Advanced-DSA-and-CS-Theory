 string fun(string a, string b)
    {
        string ans;
        for(int i = 0,j = 0; i < a.size(),j < b.size();i++,j++)
        {
            if(a[i] != b[j])break;
            ans += a[i];
        }
        return ans;
    }
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
       string ans = arr[0];
       for(int i =1; i < N; i++)
       {
           ans = fun(ans,arr[i]);
       }
       return ans.size()?ans:"-1";
    }
