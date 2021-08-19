int getNthFromLast(Node *head, int n)
{
       // Your code here
       int count=0;
       Node* temp=head;
       while(temp!=NULL)
       {
           count++;
           temp=temp->next;
       }
       
       int togo=count-n;
       if(togo<0)
       return -1;
       
       temp=head;
       while(togo--)
       temp=temp->next;
       return temp->data;
}


