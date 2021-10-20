//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


 // } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding on
       vector<int>v;
        Node *t=head,*x=head;
        int i,c=1;
        while(t!=NULL){v.push_back(t->data); t=t->next;}
        for(i=v.size()-1;i>=0;i--){
            if(v[i]<9){v[i]+=1; c=0; break;}
            else v[i]=0;
        }
        if(c){x=new Node(1); c=1;}
        if(c==1){
            t=x;
        for(i=0;i<v.size();i++){
                t->next=new Node(v[i]);
                t=t->next;
            }}
        else{
            x=new Node(v[0]);
            t=x;
            for(i=1;i<v.size();i++){
                t->next=new Node(v[i]);
                t=t->next;
            }
        } 
        return x;
        }
        
           
    
};

// { Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 
  // } Driver Code Ends
