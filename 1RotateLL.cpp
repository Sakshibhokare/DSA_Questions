class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || k==0)return head;
        int cnt=0;
        ListNode* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
            cnt++;
        }
        k=k%(cnt+1);//to handle the case where the size of ll is small than k
        temp->next=head;
        int jump=cnt-k;
        temp=head;
        while(jump){
            temp=temp->next;
            jump--;
        }
        ListNode* newHead=temp->next;
        temp->next=NULL;
        return newHead;
        
    }
};
