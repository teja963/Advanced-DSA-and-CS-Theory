class Solution{
public:	
	int maxSubstring(string S)
	{
	    // Your code goes here
	    int c=0,m=0;
	    for(int i=0;i<S.size();i++)
	    {
	        if(S[i]=='0')c+=1;
	        else if(S[i]=='1')c-=1;
	        m=max(m,c);
	        if(c<0)c=0;   //update curr_sum if case of all 1's
	    }
	    return m==0?-1:m;   //if all 1's -1 else return ans
	}
