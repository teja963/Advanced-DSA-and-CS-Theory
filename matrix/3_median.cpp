//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function template for C++

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        // code here   
    int i,j,k=0;
    vector<int>v(22500);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            v[k++]=matrix[i][j];
            
        }
    }
    v.resize(k);
    sort(v.begin(),v.end());
    return v[k/2];
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
