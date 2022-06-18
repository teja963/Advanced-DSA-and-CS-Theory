/*
https://www.geeksforgeeks.org/samsung-competency-test-25-aug-19/
*/
/*
	----IIT(ISM) Dhanbad----
	Author: Siddhant Choudhary
	
	--samsumg coding test--
	
	Q.There is a large plot with various sinkholes present. 
	Since one sinkhole can combine with another sinkhole, it is required to get
	at most one sinkhole while occupying the plot. You have to find the maximum 
	square-area formed with at most one sinkhole present.
	If there are two plots with the same area then print the one with 
	lesser sinkhole present otherwise if the sinkholes are also same then print
	anyone. For each case, you have to print the bottom leftmost coordinate and 
	top rightmost point. Please keep in mind that the plot starts with (1, 1).
	Time limit= 1sec and Memory limit– 256Mb
	Input: First line will give the number of test cases. For each test case, we
	will be given the size of the plot matrix N x M (where 1<=N, M<=1000). Next
	line will give the number of sinkholes present in the matrix K (1<=K<=N+M). 
	Next, K-lines will give the coordinates of the sinkholes.
	Output: For each test case, you have to print the number of the test case
	and the coordinates of the resultant square.
	i.e. #i xb yb xt yt (ith test case, xb=bottomost left x-coordinate, 
	yb=bottomost  left y-coordinate, xt= topmost right x-coordinate,
	yt= topmost right y-coordinate)
	
  *	time complexity of my approach = O(n*m*log(min(m,n))) *
*/
#include<bits/stdc++.h>
using namespace std;
int n, m, k, t;
int xb, yb, xt, yt;
int fun(int dp[1001][1001], int n, int m, int k){
	int msum = INT_MAX;
	for(int i = 0; i <= (n-k); i++){
		for(int j = 0; j <= (m-k); j++){
			int sum = dp[i+k][j+k] - dp[i+k][j] - dp[i][j+k] + dp[i][j];
			
			if(sum < msum){
				msum = sum;
				if(msum <= 1){
					xb = i+k;
					yb = j+1;
					xt = i+1;
					yt = j+k;
				}
			}
		}
	}
	return msum;
}
int a[1001][1001], dp[1001][1001];
int main(){
	cin>>t;
	for(int test_case = 1; test_case <= t; test_case++){
		cin>>n>>m;
		memset(a, 0, sizeof(a));
		memset(dp, 0, sizeof(dp));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				a[i][j] = 0;
			}
		}
		cin>>k;
		for(int i = 0; i < k; i++){
				int rc, cc;
				cin>>rc>>cc;
				a[rc-1][cc-1] = 1;
		}
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++){
				dp[i][j] = dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1] + a[i-1][j-1];
			}
		}
		int l = 1, r = min(m, n);
		int ones;
		while(l < r){
			int mid = (l+r)/2;
			ones = fun(dp, n, m, mid);
			if(ones > 1)r = mid;
			else l = mid+1;
		}
		cout<<'#'<<test_case<<" "<<xb<<" "<<yb<<" "<<xt<<" "<<yt<<endl;
	}
	return 0;
}
