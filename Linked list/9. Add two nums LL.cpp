class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* t=l1,*tmp=NULL,*x,*j=l1;
        while(j->next)j=j->next;
        int c=0,p,k=0;
        while(l1&&l2){
            p=l1->val+l2->val+c;
            l1->val=p%10;
            c=p/10;
            l1=l1->next;
            l2=l2->next;
        }
        if(c>0&&!l1&&!l2)j->next=new ListNode(c);
        else if(l1){
            while(l1){ p=l1->val+c; l1->val=p%10; c=p/10; l1=l1->next; k=1;}
           if(c>0&&k==1)j->next=new ListNode(c);
           }
        else{
            tmp=new ListNode(0);
            x=tmp;
            k=0;
            while(l2){ p=l2->val+c; x->next=new ListNode(p%10); c=p/10; l2=l2->next; x=x->next; k=1;}
            if(c>0&&k==1)x->next=new ListNode(c);
            j->next=tmp->next;
          }
        return t;
        
    }
};
