class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       ListNode* i=head,*j=head;
       while(n--)j=j->next;
       if(!j)return head->next;
       while(j->next){i=i->next; j=j->next;}
       i->next=i->next->next;
       return head;  
    }
