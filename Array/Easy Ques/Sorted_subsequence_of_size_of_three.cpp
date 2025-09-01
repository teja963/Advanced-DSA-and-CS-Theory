#include <bits/stdc++.h>
using namespace std;
class Solution{
  public:
    vector<int> find3Numbers(vector<int> arr, int N) {
        // Your code here
        int i,j,k,l[N],r[N];
        l[0] = arr[0];
        for(i = 1; i < N; i++)l[i] = min(arr[i], l[i-1]);
        r[N-1] = arr[N-1];
        for(i = N-2; i >= 0; i--)r[i] = max(arr[i], r[i+1]);
        vector<int>v;
        for(i = 1; i < N-1; i++){
            if(l[i-1] < arr[i] && arr[i] < r[i+1]){
                v.push_back(l[i-1]);
                v.push_back(arr[i]);
                v.push_back(r[i+1]);
                  return v;    
            }
        }
        return v;      
    }
};
