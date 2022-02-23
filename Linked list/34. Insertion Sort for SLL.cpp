 Node* insertionSort(struct Node* head_ref)
    {
        //code here
        Node* curr = head_ref;
        Node* head = new Node(-1);
        while(curr){
            Node* tmp = head;
            while(tmp->next and tmp->next->data < curr->data)tmp = tmp->next;
            Node* next  = curr->next;
            curr->next = tmp->next;
            tmp->next = curr;
            curr = next;
        }
        return head->next;
    }
    
