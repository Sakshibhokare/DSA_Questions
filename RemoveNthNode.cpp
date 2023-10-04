class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL)return NULL;
        int len=0;
        ListNode* temp=head;
        while(temp!=NULL){
            ++len;
            temp=temp->next;
        }
       int NodeToDelete=len-n;
        if(len==1)return NULL;
        
        
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* nextN=curr->next;
        
        if(NodeToDelete==0){
            curr=curr->next;
            delete head;
            return curr;
        }
        
        while(NodeToDelete>0){
            prev=curr;
            curr=nextN;
            nextN=nextN->next;
            NodeToDelete--;
        }
        prev->next=nextN;
        delete curr;
        return head;
        
    }
};
