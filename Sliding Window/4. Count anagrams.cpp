class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    int m = txt.size(),n = pat.size();
	    vector<int>mp(26, 0),mt(26, 0);
	    for(int i = 0; i < n; i++)
	    {
	        mt[txt[i]-'a']++;
	        mp[pat[i]-'a']++; 
	    }
	    int c = 0;
	    if(mt == mp)c++;
	    for(int i = n; i < m; i++)
	    {
	        mt[txt[i]-'a']++;
	        mt[txt[i-n]-'a']--;
	        if(mt == mp)c++;
	    }
	    return c;
	}
	    

