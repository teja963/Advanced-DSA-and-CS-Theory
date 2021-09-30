class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head||!head->next)return 0;
        ListNode* slow=head,*fast=head->next;
        while(1){
            if(!fast||!fast->next||!fast->next->next)return 0;
            if(slow==fast)return 1;
            slow=slow->next;
            fast=fast->next->next;
        }
        return 0;
    }
