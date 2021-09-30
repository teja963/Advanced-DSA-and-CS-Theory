class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head||!head->next)return 0;
        ListNode* slow=head,*fast=head->next;
        int k=0;
        while(1){
            if(!fast||!fast->next||!fast->next->next)return 0;
            if(slow==fast){k=1;break;}
            slow=slow->next;
            fast=fast->next->next;
        }
           if(k==1){
             slow=slow->next;
            fast=head;
            while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
          }
            return slow;
        }
        return NULL;
     
    }
