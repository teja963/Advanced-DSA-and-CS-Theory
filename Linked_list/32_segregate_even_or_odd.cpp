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
        cout << node->data <<" "; 
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
class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
        vector<int>v1,v2;
        Node *t=head,*x;
        while(t!=NULL){if(t->data%2==0)v1.push_back(t->data); else v2.push_back(t->data); t=t->next;}
        if(v1.size()!=0){
            x=new Node(v1[0]);
           t=x;
        for(int i=1;i<v1.size();i++){
            t->next=new Node(v1[i]);
            t=t->next;
        }
        for(int i=0;i<v2.size();i++){
            t->next=new Node(v2[i]);
            t=t->next;
        }}
        else{
            x=new Node(v2[0]);
            t=x;
            for(int i=1;i<v2.size();i++){
            t->next=new Node(v2[i]);
            t=t->next;
        }
            
        }
        return x;
    }
};

// { Driver Code Starts.

int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        
        Solution ob;
        Node *ans = ob.divide(N, head);
        printList(ans); 
    }
    return 0;
}
