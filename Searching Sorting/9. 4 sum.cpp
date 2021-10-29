#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
         vector<vector<int>> v;
      sort(arr.begin(),arr.end());
      for(int i = 0; i < arr.size(); i++)
      {
        if(i != 0 && arr[i] == arr[i - 1]) continue;
        for(int j = i + 1; j < arr.size(); j++)
        {
          if(j != i + 1 && arr[j] == arr[j - 1]) continue;
          
          int t = j + 1;
          int l = arr.size() - 1;
          
          while(t < l)
          {
            int sum = arr[i] + arr[j] + arr[t] + arr[l];
             if(k==sum){
              v.push_back({arr[i], arr[j], arr[t], arr[l]});t++;
              while(t < l && arr[t] == arr[t - 1]) t++;
            }
            else if(sum < k) t++;
            else l--;
          }
          
        }
      }
      
      return v;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
