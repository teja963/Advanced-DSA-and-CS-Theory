/*
You have to place an electronic banner of a company as high as it can be, so that whole the city can view the banner standing on top of TWO PILLERS.
The height of two pillers are to be chosen from given array.. say [1, 2, 3, 4, 6]. We have to maximise the height of the two pillars standing side by side, so that the pillars are of EQUAL HEIGHT and banner can be placed on top of it.
In the above array, (1, 2, 3, 4, 6) we can choose pillars like this, say two pillars as p1 and p2..
Then pillars can be,
p1 = 3 unitâ¦ Choosing element (3) from array,
Similarly p2 = 3 choosing (2 + 1) from array.
Since, two pillars are equal, we can put board on itâ¦
But we have two maximise the height of the pillars,
And if we check for other heights, we can see p1 = 6 p2 = 4 + 2 which is greater than 3 ( the previous height)..
We have to see if we can further maximize the heightâ¦ Yes it can be 8.
I.e. p1 = 6 + 2 = 8. p2 = 4 + 3 + 1 = 8.
Both pillars are equal and banner can be placedâ¦ And since this is the maximum height attainable for two pillars, we print the answer as 8. In case, there is no combination possible, print 0 (zero).
 
INPUT :
1
5
1 2 3 4 6
First line is  T  number of test cases to be followed.
Second line of input is number of different pillars.
Third line of input is  different available heights of pillars.
Note : heights of given pillars can be same .. I.e. array can have same elements repeated.
 
Output.
8
*/
#include<bits/stdc++.h>
using namespace std;
int n, t, ans;
int a[100];
int visi[100];
void fun(int a[], int p1, int p2){
if(p1 == p2){
	ans = max(ans, p1);
}
	for(int i = 0; i < n; i++){
		if(!visi[i]){
			visi[i] = 1;
			fun(a, p1 + a[i], p2);
			fun(a, p1, p2 + a[i]);
			visi[i] = 0;
		}
	}
}
int main(){
		cin>>t;
		for(int test_case = 1; test_case <= t; test_case++){
			cin>>n;
			memset(a, 0, sizeof(a));
			memset(visi, 0, sizeof(visi));
			for(int i = 0; i < n; i++){
				cin>>a[i];
			}
			ans = INT_MIN;
			fun(a, 0, 0);
			cout<<'#'<<test_case<<" "<<ans<<endl;
		}
}

