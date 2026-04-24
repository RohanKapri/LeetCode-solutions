struct ListNode* deleteDuplicates(struct ListNode* head) {
    if(head==NULL || head->next==NULL) return head;
    struct ListNode* prev=head;
    struct ListNode* curr=head->next;
    while(curr!=NULL){
        if(prev->val==curr->val){
            prev->next=curr->next;
            curr=curr->next;
        }else{
            prev=curr;
            curr=curr->next;
        }
    }
    return head;
}