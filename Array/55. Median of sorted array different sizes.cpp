//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    double Median(vector<int>v1,vector<int>v2)
    {
        int n1=v1.size(),n2=v2.size();
        int i=0,j=0;
        double m1,m2;
        if((n1+n2)%2==1)
        {
          for(int c=0;c<=(n1+n2)/2;c++)
           {
             if(i!=n1&&j!=n2)                                 //complete iteration of equal no.of sizes n1 and n2 
             {
                m1=double(v1[i]>v2[j]?v2[j++]:v1[i++]);
             }
            else if(i<n1)m1=double(v1[i++]);    //if n1 iteration still left
            else m1=double(v2[j++]);
           }
          return m1;                        //for odd only 1 middle element
        }
        
        else{
             for(int c=0;c<=(n1+n2)/2;c++)
           {
               m2=m1;                      //m2 for previous element
             if(i!=n1&&j!=n2)
             {
                m1=double(v1[i]>v2[j]?v2[j++]:v1[i++]);
             }
            else if(i<n1)m1=double(v1[i++]);
            else m1=double(v2[j++]);
           }
          return (m1+m2)/2;                 // if n is even two middle values
        }
        }
    
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        // Your code goes here
        return Median(array1,array2);
    
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}


