
/* Should return true if linked list is circular, else false */
bool isCircular(Node *head)
{
   // Your code here
   Node *temp1=head,*temp2=head->next;
   while(temp1!=temp2)
   {
       if(temp2==NULL || temp2->next==NULL)
       return false;
       temp1=temp1->next;
       temp2=temp2->next->next;
   }
 
   return true;
}

