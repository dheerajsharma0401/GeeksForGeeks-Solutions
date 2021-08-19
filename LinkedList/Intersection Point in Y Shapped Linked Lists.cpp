int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    Node * temp1=head1;
    Node *temp2=head2;
    
    int len1=0;
    int len2=0;
    while(temp1!=NULL)
    {
        len1++;
        temp1=temp1->next;
    }
    while(temp2!=NULL)
    {
        len2++;
        temp2=temp2->next;
    }
    Node* h1=head1;
    Node* h2=head2;
    if(len1>len2)
    {
        int diff=len1-len2;
        while(diff--)
        {
            h1=h1->next;
        }
    }
    else
    if(len1<len2)
    {
        int diff=len2-len1;
        while(diff--)
        {
            h2=h2->next;
        }
    }
    
    while(h1!=h2)
    {
        h1=h1->next;
        h2=h2->next;
    }
    if(h1==NULL)
    return -1;
   
    return h1->data;
    
    
}

