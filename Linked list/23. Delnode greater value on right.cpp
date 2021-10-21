class Solution
{
    public:
    Node* reverse(Node* head)
    {
        Node* prev=NULL,*curr=head,*next=NULL;
        while(curr)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    Node *compute(Node *head)
    {
        // your code goes here
        head=reverse(head);
        Node* h=head;
        Node* curr=h,*tmp=h->next;
        while(tmp)
        {
            if(curr->data>tmp->data){
                Node* d=tmp;
                tmp=tmp->next;
                curr->next=tmp;
                free(d);
            }
            else{
                curr=curr->next;
                tmp=tmp->next;
            }
        }
        return reverse(head);
    }
    
};
