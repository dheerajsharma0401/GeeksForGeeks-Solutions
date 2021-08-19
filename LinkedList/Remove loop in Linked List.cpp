
class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        Node* slow=head;
        Node* fast=head;
        
        while(fast!=NULL)
        {
            fast=fast->next;
            while(fast!=NULL)
            {
                slow=slow->next;
                fast=fast->next;
                
            
            if(slow==fast)
            {
                fast=fast->next;
                int size=1;
                while(slow!=fast)
                {
                    fast=fast->next;
                    size++;
                }
                
                slow=head;
                fast=head;
                
                for(int i=0;i<size-1;i++)
                {
                    fast=fast->next;
                }
                while(fast->next!=slow)
                {
                    fast=fast->next;
                    slow=slow->next;
                }
                
                fast->next=NULL;
            }
            
        }
        }
        
    }
};
