class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* dummy1=new ListNode(0);
        ListNode* temp1=dummy1;
        ListNode* dummy2=new ListNode(0);
        ListNode* temp2=dummy2;
        
        ListNode* temp=head;
        
        while(temp!=NULL){
            if(temp->val<x){
                temp1->next=temp;
                temp=temp->next;
                temp1=temp1->next;
            }
            else{
                temp2->next=temp;
                temp=temp->next;
                temp2=temp2->next;
            }
        }
        temp1->next=dummy2->next;
        temp2->next=NULL;
        return dummy1->next;
    }
};
