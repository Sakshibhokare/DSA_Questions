class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==NULL)
            return NULL;
        
        ListNode* curr=head;
        ListNode* prev=NULL;
        while(left>1){
            prev = curr;
            curr=curr->next;
            left--;
            right--;
        }
        ListNode* start=prev;
        ListNode* tail=curr;
        ListNode* temp=NULL;
        
        while(right>0){
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
            right--;
        }
        if(start!=NULL){
            start->next=prev;
        }
        else{
            head=prev;
        }
        tail->next=curr;
        return head;
    }
};
