#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t,i,j,n,m,c;
	cin>>t;
	while(t--){
	    c=0;
	    cin>>m>>n;
	    vector<int>v1(m),v2(n);
	    unordered_map<int,int>M;
	    for(i=0;i<m;i++)cin>>v1[i];
	    for(i=0;i<m;i++)M[v1[i]];
	    for(i=0;i<n;i++)cin>>v2[i];
	    for(i=0;i<n;i++)if(M.find(v2[i])!=M.end())c++;
	    if(c==n)cout<<"Yes"<<"\n";
	    else cout<<"No"<<"\n";}
	return 0;
