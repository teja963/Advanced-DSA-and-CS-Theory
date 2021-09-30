class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head)return head;
        ListNode* t=head;
        int c=1;
        while(t->next){t=t->next; c++;}
        k=c-k%c;
        t->next=head;
        while(k--)t=t->next;
        head=t->next;
        t->next=NULL;
        return head;}
