 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* ans = NULL, *travel = NULL;
        while(l1 || l2 || carry){
            int sum = 0;
            if(l1){
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2){
                sum += l2->val;
                l2 = l2->next;
            }
            sum += carry;
            carry = sum / 10;
            ListNode* tmp = new ListNode(sum % 10);
            if(!ans){
                ans = tmp;
                travel = tmp;
            }
            else{
                travel->next = tmp;
                travel = travel->next;
            }
        }
        return ans;
    }
};
