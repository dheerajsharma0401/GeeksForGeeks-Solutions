Node *removeDuplicates(Node *head)
{
 // your code goes here
    Node* temp=head;
    
    while(temp->next!=NULL)
    {
        if(temp->data==temp->next->data)
        {
            temp->next=temp->next->next;
        }
        else
        temp=temp->next;
    }
    
    return head;
}