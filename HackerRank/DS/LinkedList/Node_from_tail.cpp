void getNodeFromTail(Node *list, int positionFromTail){
    int index=0;
    Node *curr=list, *result=list;
    while(curr!=nullptr){
        curr=curr->next;
        if(index++ > positionFromTail) result=result->next;
    }
    cout << "Node at postion " << positionFromTail << " from tail is " << result->data << endl;
}
