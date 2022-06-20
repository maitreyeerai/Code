DoublyLinkedListNode* reverse(DoublyLinkedListNode* llist) {
    if(llist==nullptr || llist->next==nullptr) return llist;
    DoublyLinkedListNode *prevnode=nullptr, *curr=llist, *temp=nullptr;
    while(curr!=nullptr){
        temp=curr->next;
        curr->next=prevnode;
        curr->prev=temp;
        prevnode=curr;
        curr=temp;
    }
    llist=prevnode;
    return llist;
}
