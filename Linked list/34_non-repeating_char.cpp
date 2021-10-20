#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		   string s;
		   queue<char>q;
		   vector<int>v(26);
		   for(int i=0;i<A.size();i++){
		       q.push(A[i]);
		       v[A[i]-'a']++;
		       while(!q.empty()){
		           if(v[q.front()-'a']>1)q.pop();
		           else {s+=q.front(); break;}}
		          if(q.empty())s+='#';
		   }
		    return s;
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
