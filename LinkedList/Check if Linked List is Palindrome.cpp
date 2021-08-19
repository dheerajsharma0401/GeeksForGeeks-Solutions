

int is_identical(Node *head1,Node *head2)
{
    for(;head1 && head2;head1=head1->next,head2=head2->next)
    {
        if(head1->data!=head2->data)
        return 0;
    }
    return 1;
}

Node *reverse(Node *head){
    Node *temp=head;
    Node *prev=NULL,*next=NULL;
    while(temp!=NULL)
    {
        next=temp->next;
        temp->next=prev;
        
        prev=temp;
        temp=next;
    }
    return prev;
    
}
//Function to check whether the list is palindrome.
bool isPalindrome(Node *head)
{
    //Your code here
    Node *temp=head;
    int count=0,count1=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    count1=count;
   count1=(count1-1)/2;
    
    temp=head;
   
    for(int i=0;i<count1;i++){
        //cout<<temp->data<<"--"<<endl;
       
    temp=temp->next;
    }
    Node *head2;
    head2=temp->next;
    temp->next=NULL;
    
    head2=reverse(head2);
    
    Node *head1=head;
    int res=is_identical(head1,head2);
    
    head2=reverse(head2);
    
    temp->next=head2;
    
    
   // Node* next;
    

    
    
    return res;
}
