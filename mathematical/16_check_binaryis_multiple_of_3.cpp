
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	int isDivisible(string s){
	    //complete the function here
	    int i,c1=0,c2=0;
	    for(i=0;i<s.size();i++)if(i%2==0&&s[i]=='1')c2++; else if(i%2!=0&&s[i]=='1')c1++;
	    return abs(c1-c2)%3==0;
	}

};

// { Driver Code Starts.
int main(){
    
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isDivisible(s) << endl;
    }
return 0;
}

