if(!head || !head->next){
            return head;
        }
        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        ListNode *current = head;
        ListNode *prev = dummy;

        while(current!=nullptr && current->next!=nullptr){
            if(current->val == current->next->val){
                int match = current->val;
                while(current!=nullptr && current->val == match){
                    current = current->next;
                }
                prev->next = current;

            }
            else{
                prev = current;
                current = current->next;
            }
        }
        ListNode *newHead = dummy->next;
        delete dummy;
        return newHead;
