int main() {
	//code
	int i,j,t,k,n,l=0;
	cin>>t;
	while(t--){
	    cin>>n>>k;
	    vector<int>v(n);
	    for(i=0;i<n;i++)cin>>v[i];
	    for(i=0;i<n;i++)if(v[i]==k){j=i;l++; break;}
	    if(l==0)cout<<-1<<"\n";
	    else{
	    cout<<j<<" "<<j+count(v.begin(),v.end(),k)-1<<"\n";
	}}
	
	return 0;}
