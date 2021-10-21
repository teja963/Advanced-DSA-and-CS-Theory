class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* i=head,*j=head,*t;
        while(--k&&i->next)i=i->next;
        t=i;
        while(i->next){i=i->next; j=j->next;}
        swap(t->val,j->val);
        return head;
    }
