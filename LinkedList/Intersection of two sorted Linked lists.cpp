
Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    Node* head3=new Node(-1);
    Node * ptr=head3;
    Node* h1=head1;
    Node* h2=head2;
    while(h1!=NULL && h2!=NULL)
    {
        if(h1->data==h2->data)
        {
            Node* temp=new Node(h1->data);
            ptr->next=temp;
            ptr=temp;
            h1=h1->next;
            h2=h2->next;
        }
        else
        if(h1->data>h2->data)
        {
            h2=h2->next;
        }
        else
        h1=h1->next;
        
    }
    return head3->next;
}