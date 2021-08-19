class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
     Node* curr=head;
     set<int> s;
    //  Node* node=new Node(-1);
    //  Node* realHead=node;
    //  //Node* ptr=realHead;
    //  Node* ptr=node;
    Node* prev=NULL;
     while(curr!=NULL)
     {
         if(s.find(curr->data)!=s.end())
         {
             prev->next=curr->next;
             curr=curr->next;
         }
         else
         {
             s.insert(curr->data);
             prev=curr;
             curr=curr->next;
         }
     }
     
     
    
     
     return head;
    }
};