/*
3
(0(5(6()())(4()(9()())))(7(1()())(3()())))
1
(0(5(6()())(4()(9()())))(7(1()())(3()())))
2
(0(5(6()())(4()(9()())))(7(1()())(3()())))
3
 
Answers 
12 14 9
*/

#include<bits/stdc++.h>
using namespace std;
int ans, t, k;
void fun(string s, int k){
	int level = -1;
	int i = 0;
	while(s[i] != '\0'){
		if(s[i] == '(')level++;
		else if(s[i] == ')')level--;
		else if(level == k)ans += (s[i] - '0');
		i++;
	}
}
int main(){
		cin>>t;
		for(int test_case = 1; test_case <= t; test_case++){
			string s;
			cin>>k>>s;
			ans = 0;
			fun(s, k);
			cout<<'#'<<" "<<ans<<endl;
		}
}
       
