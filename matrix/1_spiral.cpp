
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends



class Solution
{   
public:     
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        int m=0,n=0,i,k=0;
        vector<int>v(r*c);
while(m<r&&n<c)
{
 for(i=n;i<c;i++)v[k++]=matrix[m][i];
  m++;
 for(i=m;i<r;i++)v[k++]=matrix[i][c-1];
  c--;
  if(m<r){
  for(i=c-1;i>=n;i--){v[k++]=matrix[r-1][i];}
  r--;}
  if(n<c){
  for(i=r-1;i>=m;i--){v[k++]=matrix[i][n];}
  n++;
    }
}
        return v;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
