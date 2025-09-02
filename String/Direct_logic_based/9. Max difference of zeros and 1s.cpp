/*
Given a binary string S consisting of 0s and 1s. The task is to find the maximum difference of the number 
of 0s and the number of 1s (number of 0s – number of 1s) in the substrings of a string.

Note: In the case of all 1s, the answer will be -1.
*/
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
