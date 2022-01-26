class Solution{
public:	
	int maxSubstring(string S)
	{
	    // Your code goes here
	   int ans = 0, sum = 0;
	    if(S.find('0') == string::npos)return -1;
	    for(auto x: S)
	    {
	        int tmp = (x == '0')? 1: -1;
	        sum = max(tmp, sum + tmp);
	        ans = max(ans, sum);
	    }
	    return ans;
	}
};
