#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int i,j,t,n,m,k;
	cin>>t;
	while(t--){
	    cin>>n>>m>>k;
	    vector<int>v(n+m);
	    for(i=0;i<m+n;i++)cin>>v[i];
	    sort(v.begin(),v.end());
	    cout<<v[k-1]<<"\n";
	    v.clear();
	}
	return 0;
