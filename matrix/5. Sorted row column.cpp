#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int i,j,n,t,k;
	cin>>t;
	while(t--){
	    cin>>n;
	vector<int>v(n*n);
	    k=0;
	for(i=0;i<n*n;i++)cin>>v[k++];
	sort(v.begin(),v.end());
	for(i=0;i<k;i++)cout<<v[i]<<" ";
	    cout<<"\n";
	    v.clear();
	}
	return 0;
