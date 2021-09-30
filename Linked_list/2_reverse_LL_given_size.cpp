#include<bits/stdc++.h>
using namespace std;


struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
    
};

/* Function to print linked list */
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}


 // } Driver Code Ends
/*
  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
    struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;
*/

void re(vector<int>&v,int k){
        for(int i=0;i<v.size();i+=k){
            if(i+k>v.size())reverse(v.begin()+i,v.end());
            else reverse(v.begin()+i,v.begin()+i+k);
    }}
class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        int i,n=0;
        struct node* t=head;
        while(t!=NULL){n++; t=t->next;}
        vector<int>v(n);
        i=0;
        t=head;
        while(t!=NULL){v[i++]=t->data; t=t->next;}
        re(v,k);
        t=head;
        i=0;
        for(auto x:v){
            if(t!=NULL){
            t->data=x;
            t=t->next;}}
        return head;
    }
};


// { Driver Code Starts.

/* Drier program to test above function*/
int main(void)
{
    int t;
    cin>>t;
     
    while(t--)
    {
        struct node* head = NULL;
        struct node* temp = NULL;
        int n;
        cin >> n;
         
        for(int i=0 ; i<n ; i++)
        {
            int value;
            cin >> value;
            if(i == 0)
            {
                head = new node(value);
                temp = head;
            }
            else
            {
                temp->next = new node(value);
                temp = temp->next;
            }
        }
        
        int k;
        cin>>k;
        
        Solution ob;
        head = ob.reverse(head, k);
        printList(head);
    }
     
    return(0);
}

