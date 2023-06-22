#include<bits/stdc++.h>
using namespace std;
int main() {
	//code
	int t,n,i,j,w;
	cin>>t;
	while(t--){
	    w = 0;
	    cin>>n;
	    vector<int>l(n),r(n),v(n);
	    for(i=0;i<n;i++)cin>>v[i];
	    left[0] = v[0];
	    right[n-1] = v[n-1];
	    for(i = 1; i < n; i++)left[i] = max(left[i-1], v[i]);
	    for(i = n-2; i >= 0; i--)right[i] = max(right[i+1], v[i]);
	    for(i = 0 ; i < n; i++)w += (min(l[i],r[i])-v[i]);
	    cout<<w<<"\n";
	    v.clear();
	    l.clear();
	    r.clear();
	}
	return 0;
