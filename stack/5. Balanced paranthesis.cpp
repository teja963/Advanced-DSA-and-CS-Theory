#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
       stack<char>s;
       int i,k=1;
       char j;
       if(x.size()%2==1)return false;
       else if(x[0]=='}'||x[0]==']'||x[0]==')')return false;
       else{for(i=0;i<x.size();i++){
           if(x[i]=='{'||x[i]=='['||x[i]=='(')s.push(x[i]);
           else{
               if(!s.empty()){
               if(s.top()=='{')j='}';
               else if(s.top()=='[')j=']';
               else j=')';
               if(j!=x[i])return false;
               else s.pop();}
               else return false;
           }
       }
       return (s.empty());
       }
    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
