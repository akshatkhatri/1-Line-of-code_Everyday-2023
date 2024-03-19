Node * deleteLastNode(Node *head) {
    // Write your code here

    if(head->next==nullptr){
        return nullptr;
    }
    Node *temp=head;

    while(temp->next->next!=nullptr){
        temp=temp->next;
    }
        delete temp->next;
        temp->next=nullptr;

    return head;
}
