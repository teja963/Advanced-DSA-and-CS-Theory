class Solution
{
    public:
    Node* reverse(Node* head)
    {
        Node* prev=NULL,*curr=head;
        while(curr)
        {
            Node* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        head=reverse(head);
        Node* curr=head;
        Node* tmp=NULL;
        int inc=1;
        while(curr)
        {
            int x=(inc+curr->data);
            curr->data=x%10;
            inc=x/10;
            tmp=curr;
            curr=curr->next;
        }
        while(inc>0)
        {
            tmp->next= new Node(inc%10);
            inc/=10;
        }
        return reverse(head);
        
        
    }
};
