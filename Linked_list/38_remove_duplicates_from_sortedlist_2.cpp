class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dum=new ListNode(0,head);   //it is always better to have a  prev node while removing or dng any operations
            ListNode* prev=dum;
        while(head){
            if(head->next&&head->val==head->next->val){
            while(head->next&&head->val==head->next->val)head=head->next;
               prev->next=head->next;}
            else prev=prev->next;
            head=head->next;
            }
            
        return dum->next; 
        
    }
