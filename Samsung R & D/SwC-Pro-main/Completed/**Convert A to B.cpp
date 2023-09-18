#include<bits/stdc++.h>
using namespace std;
unordered_map<int,int>mp;
int arr1[1000];
int arr2[1000];
int new_arr[1000][2];
bool ans = false;
void fun(int i, int n, int val)
{
	/*boundary condition and pruning*/
 	if(i > n || mp.find(val) == mp.end())return;
 	mp[val]--;
 	if(mp[val] == 0){
 		mp.erase(val);
 	}
 	if(i == n-1){
 		if(mp.size() == 0)ans = true;
 	}
 	fun(i+1, n, new_arr[i+1][0]);
 	fun(i+1, n, new_arr[i+1][1]);
 	mp[val]++;
}

int main()
{
    int n;
    cin>>n;
    int E;
    cin>>E;
    memset(arr1, 0, sizeof(arr1));
    memset(arr2, 0, sizeof(arr2));
    memset(new_arr, 0, sizeof(new_arr));
    for(int i = 0; i < n; i++){
    	cin>>arr1[i];
    	mp[arr1[i]]++;
   	}
    for(int i = 0; i < n; i++)cin>>arr2[i];
    for(int i = 0; i < n; i++){
    	new_arr[i][0] = arr2[i] - E;
    	new_arr[i][1] = arr2[i] + E;
    }
    fun(0, n, new_arr[0][0]);
    fun(0, n, new_arr[0][1]);
    if(ans)cout<<"1"<<endl;
    else cout<<"0"<<endl;
}
