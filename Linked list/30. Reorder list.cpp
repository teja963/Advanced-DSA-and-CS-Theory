  ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        ListNode* part2 = slow->next;
        slow->next = NULL;
        
        ListNode* curr = part2;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        
        while(curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        part2 = prev;
        
        ListNode* part1 = head;
        
        ListNode* next1;
        ListNode* next2;
        
        while(part2 != NULL)
        {
            next1 = part1->next;
            next2 = part2->next;
            
            part1->next = part2;
            part2->next = next1;
            
            part1 = next1;
            part2 = next2;
        }
        
