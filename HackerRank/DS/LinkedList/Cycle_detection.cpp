//cycle->1, no cycle->0
bool has_cycle(SinglyLinkedListNode* head) {
    if(head==nullptr) return 0;
    SinglyLinkedListNode *curr=head, *temp=head;
    while(temp!=nullptr && temp->next!=nullptr ){
        curr=curr->next;
        temp=temp->next->next;
        if(curr==temp) return 1;
    }
    return 0;
}
