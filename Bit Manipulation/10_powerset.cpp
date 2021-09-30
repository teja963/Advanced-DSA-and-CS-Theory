#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

void subsets(string s,int l,int r,vector<string>&v,string s1=""){
    if(l>r){string s2=string(s1.rbegin(),s1.rend()); if(s2.size())v.push_back(s2); return ;}
    subsets(s,l+1,r,v,s[l]+s1);
    subsets(s,l+1,r,v,s1);
}
class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    vector<string>v;
		    subsets(s,0,s.size()-1,v);
		    sort(v.begin(),v.end());
		    return v;
		}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
