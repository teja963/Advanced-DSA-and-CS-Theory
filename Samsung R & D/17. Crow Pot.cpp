/*
https://www.careercup.com/question?id=5166688897073152
http://forums.codeguru.com/showthread.php?560529-Core-Java-programming
https://codereview.stackexchange.com/questions/136165/the-thirsty-crow
*/

/*
There are N pots. Every pots has some water in it. They may be partially filled. 
Every pot is associated with overflow number O which tell how many minimum no. of stones required 
for that pot to overflow. The crow know O1 to On(overflow no. for all the pots). Crow wants some K 
pots to be overflow. So the task is minimum number of stones he can make K pots overflow in worst case.
Array of overflow no--. {1,...,On}
Number of pots--n
No of pots to overflow-- k
Let say two pots are there with overflow no.s {5,58}, and crow has to overflow one pot(k=1). 
So crow will put 5 stones in pot with overflow no.(58), it will not overflow, then he will put in 
pot with overflow no.(5), hence the total no. of stones to make overflow one pot is=10.
*/
#include<bits/stdc++.h>
using namespace std;
int t, n, m, ans;
int a[1009], dp[1009][1009];
void solve(){
	for(int i = 1; i <= n; i++){
		dp[i][1] = a[i]*(n-i+1);
	}
	for(int i = n; i > 0; i--){
		for(int j = 2; j <= m; j++){
			for(int k = i+1; k <= n; k++){
				dp[i][j] = min(dp[i][j], dp[k][j-1] + (k-i)*a[i]);
			}
		} 
	}
	for(int i = 1; i <= n; i++){
		ans = min(ans, dp[i][m]);
	}
}
int main(){
    int t;
    cin>>t;
    for(int test_case = 1; test_case <= t; test_case++){
    	cin>>n>>m;
    	for(int i = 1; i <= n; i++){
    		cin>>a[i];
    	}
    	memset(dp, INT_MAX, sizeof(dp));
    	ans = INT_MAX;
    	solve();
    	cout<<'#'<<test_case<<" "<<ans<<endl;
    }
    return 0;
}
