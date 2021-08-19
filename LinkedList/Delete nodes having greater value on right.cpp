class Solution
{
    public:
    Node *compute(Node *head)
    {
        head=reverse(head);
        int max=head->data;
        Node  *temp=head;
        while(temp!=NULL && temp->next!=NULL)
        {
            if(temp->next->data>=max){
            max=temp->next->data;
            temp=temp->next;
            }
            else
            temp->next=temp->next->next;
        }
        head=reverse(head);
    return head;
        // your code goes here
    }
    
};