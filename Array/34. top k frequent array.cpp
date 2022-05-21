#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


 bool cmp(pair<int,int>a, pair<int,int>b){
        if(a.second == b.second)return a.first > b.first;
        return a.second > b.second;
    }
class Solution {
   
  public:
    vector<int> topK(vector<int>& nums, int k) {
        // Code here
        unordered_map<int, int>m;
        vector<int>v;
        int i, j = 0;
        for(i = 0; i < nums.size(); i++)m[nums[i]]++;
        vector<pair<int, int>>p(m.begin(), m.end());
        sort(p.begin(), p.end(), cmp);
        for(i = 0; i < k; i++)v.push_back(p[i].first);
        return v;
    }
};


// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
    
    
//Method 2
class Solution {
public:
      typedef pair<int,int> p;   
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        vector<int>v;
        priority_queue<p,vector<p>,greater<p>>pq;
        for(auto x:nums)m[x]++;
        for(auto x:m)
        {
            p temp;
            temp.first=x.second;
            temp.second=x.first;
            pq.push(temp);
            while(pq.size()>k)pq.pop();
        }
        while(pq.size())
        {
            v.push_back(pq.top().second);
            pq.pop();
        }
        return v;
    }
};
