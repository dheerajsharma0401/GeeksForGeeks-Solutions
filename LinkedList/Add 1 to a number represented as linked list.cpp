class Solution
{
    public:
    Node *reverse(Node* head)
    {
        Node* curr=head,*prev=NULL,*temp=NULL;
        while(curr!=NULL)
        {
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        
        return prev;
    }
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        Node* node=new Node(-1);
        
        int carry=1;
        
        head=reverse(head);
        
        Node* temp=head;
       // carry=1;
        while(temp!=NULL)
        {
          int   val=temp->data+carry;
            
            temp->data=(val)%10;
            carry=val/10;
            
            temp=temp->next;
        }
       // cout<<carry<<endl;
        if(carry)
        {
            Node* n=new Node(carry);
            n->next=head;
            head=n;
            return head;
            
        }
        
        head=reverse(head);
        return head;
        
        }
};