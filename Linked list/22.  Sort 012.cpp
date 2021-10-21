class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        Node* t=head;
        int c0=0,c1=0,c2=0;
        while(t)
        {
            if(t->data==0)c0++;
            else if(t->data==1)c1++;
            else c2++;
            t=t->next;
        }
        t=head;
        while(t)
        {
            while(c0!=0){t->data=0; t=t->next; c0--;}
            while(c1!=0){t->data=1; t=t->next; c1--;}
            while(c2!=0){t->data=2; t=t->next; c2--;}
        }
        return head;
        
    }
};
