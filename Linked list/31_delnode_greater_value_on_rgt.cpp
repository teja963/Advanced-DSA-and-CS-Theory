#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



 // } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    public:
    Node *compute(Node *head)
    {
        // your code goes here
        vector<int>v1,v2;
        Node *t=head,*x;
        while(t!=NULL){v1.push_back(t->data); t=t->next;}
        reverse(v1.begin(),v1.end());
        v2.push_back(v1[0]);
        int i,j=v1[0];
        for(i=1;i<v1.size();i++){if(j<=v1[i]){v2.push_back(v1[i]); j=v1[i];}}
        reverse(v2.begin(),v2.end());
        x=new Node(v2[0]);
        t=x;
        for(i=1;i<v2.size();i++){
            t->next=new Node(v2[i]);
            t=t->next;
        }
        return x;
    }
    
    
};
   


// { Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}
