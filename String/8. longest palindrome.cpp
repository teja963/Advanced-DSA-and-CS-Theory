#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int i,j,t,m,n;
	string s,a,b,b1;
	cin>>t;
	while(t--){
	    cin>>s;
	    n=s.size();
	    for(i=0;i<n;i++){
	        for(j=1;j<=n-i;j++){
	            a=s.substr(i,j);
	            if(a==string(a.rbegin(),a.rend()))if(b.size()<a.size())b=a.substr(0);
	        }
	    }
	   cout<<b<<endl;
	    b.erase();
	}
	return 0;
