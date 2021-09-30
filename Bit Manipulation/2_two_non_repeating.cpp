#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        unordered_map<int,int>m;
        int i,j,k;
        vector<int>v;
        for(i=0;i<nums.size();i++)m[nums[i]]++;
        for(i=0;i<nums.size();i++)if(m[nums[i]]==1)v.push_back(nums[i]);
        sort(v.begin(),v.end());
        return v;
    }
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
