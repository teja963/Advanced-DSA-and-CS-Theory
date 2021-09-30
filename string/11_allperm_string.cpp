#include<bits/stdc++.h>
using namespace std;
void permuatate(string s){
    sort(s.begin(),s.end());
    do{
        cout<<s<<" ";
    }while(next_permutation(s.begin(),s.end()));
    }

int main() {
	//code
	int i,n,t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    permuatate(s);
	    cout<<"\n";
	}
	return 0;
