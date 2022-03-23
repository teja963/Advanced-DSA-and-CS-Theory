Node *swapkthnode(Node* head, int num, int K)
{
    // Your Code here
    Node *dummy = new Node(0);
    dummy->next = head;
    if(!head || K > num || K == num - K + 1)return head;  //base case
    int first = min(K, num - K + 1);
    int second = num - first + 1;
    Node *a = dummy;
    for(int i = 0; i < first-1; i++){
        a = a->next;
    }
    Node *b = a;
    for(int i = 0; i < second - first; i++){
        b = b->next;
    }
    Node *tmp = a->next;
    a->next = b->next;
    b->next = tmp;
    tmp = a->next->next;
    a->next->next = b->next->next;
    b->next->next = tmp;
    return dummy->next;
}
