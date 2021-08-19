Node* reverseDLL(Node * head)
{
    //Your code here
    Node*current=head,*next;
    if(head==NULL)
    return NULL;
    Node * tail=head;
    while(tail->next!=NULL)
    tail=tail->next;
    
    
    while(current!=NULL)
    {
        
        next=current->next;
        current->next=current->prev;
        current->prev=next;
        current=next;
        
    }
    Node *temp=head;
    head=tail;
    tail=head;
    return head;
}
