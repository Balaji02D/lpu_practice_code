if(head == NULL || head->next == NULL)return head;
        ListNode* nh = reverse(head->next);
        ListNode* temp = head->next;
        head->next= NULL;
        temp->next = head;
        return nh;
    }
    
    
    bool isPalindrome(ListNode* head) {
        ListNode* rev = reverse(head);
        ListNode*temp = head;
        
        while(temp != NULL ){
            if(rev->val != temp->val)return false;
            rev =rev->next;
            temp = temp->next;
        }
        return true;
    }
