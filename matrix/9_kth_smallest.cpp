// kth largest element in a 2d array sorted row-wise and column-wise
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
int mat[MAX][MAX];
int kthSmallest(int mat[MAX][MAX], int n, int k);
// driver program to test above function
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
    
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>mat[i][j];
        int r;
        cin>>r;
        cout<<kthSmallest(mat,n,r)<<endl;
    }
     // cout << "7th smallest element is " << kthSmallest(mat, 4, 7);
      return 0;
}
// } Driver Code Ends





int kthSmallest(int mat[MAX][MAX], int n, int k)
{
  //Your code here
  vector<int>v(n*n);
  int i,j,l=0;
  for(i=0;i<n;i++){
      for(j=0;j<n;j++){
          v[l++]=mat[i][j];
      }
  }
  sort(v.begin(),v.end());
  return v[k-1];
  
}
