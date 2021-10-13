
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//Back-end complete function Template for C++

class Solution {
public:
    int maxPoints(int X[], int Y[], int N) {
       //code here
       int curr_max,v,overlap,i,j,maxpoints=0;
     double x_diff,y_diff;
     unordered_map<double,int> m;
     for(i=0;i<N;i++)
     {  
         curr_max=0;overlap=0;v=0;
         for(j=i+1;j<N;j++)
         {
             if(X[i]==X[j] && Y[i]==Y[j])
                overlap++;
             else if(X[i]==X[j])
                v++;
             else
             {
                 x_diff=X[i]-X[j];
                 y_diff=Y[i]-Y[j];
                 m[y_diff/x_diff]++;
                 curr_max=max(curr_max,m[y_diff/x_diff]);
             }
             curr_max=max(curr_max,v);
         }
         maxpoints=max(maxpoints, 1+overlap+curr_max);
         m.clear();
         
     }
     return maxpoints;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int x[n], y[n];
        for(int i=0;i<n;i++){
            cin>>x[i];
        }
        for(int i=0;i<n;i++){
            cin>>y[i];
        }
        Solution ob;
        cout << ob.maxPoints(x, y, n) << endl;
    }
    return 0;
}
