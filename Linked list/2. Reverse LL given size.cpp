class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        node* curr=head;
        node* prev_first=NULL;
        bool first_pass=true;
       while(curr)
      {
          int tmp=k;
          node* first=curr;
          node* prev=NULL;
          while(curr&&tmp>0)
          {
              node* next=curr->next;
              curr->next=prev;
              prev=curr;
              curr=next;
              tmp--;
          }
          if(first_pass)
          {
            head=prev;
            first_pass=false;
          }
          else
          {
              prev_first->next=prev;
          }
          prev_first=first;
      }
      return head;
    }
};

