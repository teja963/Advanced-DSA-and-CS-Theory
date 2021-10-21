Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    Node *head=new Node(0);
    Node *ans=head;
    while(head1&&head2)
    {
        if(head1->data==head2->data){
            ans->next=new Node(head2->data);
            ans=ans->next;
            head1=head1->next;
            head2=head2->next;
        }
        else if(head1->data<head2->data)head1=head1->next;
        else head2=head2->next;
    }
    return head->next;
   
}
