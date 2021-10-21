class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* h=new ListNode(0),*ans=h;
        ListNode* slow=head,*fast=head;
        while(fast&&fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        while(slow)
        {
            ans->next=new ListNode(slow->val);
            ans=ans->next;
            slow=slow->next;
        }
        return h->next;
        
    }
};
