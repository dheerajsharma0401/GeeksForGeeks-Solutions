class Solution{
public:
    Node* divide(int N, Node *head){
        //Node *even=head;
        vector<int> even;
        vector<int>odd;
        Node *temp=head;
        
        while(temp!=NULL)
        {
         if(temp->data%2==0)
         even.push_back(temp->data);
         
         else
         odd.push_back(temp->data);
         
         temp=temp->next;
         
        }
        
        int len1=even.size();
        int index=0;
        temp=head;
        while(index<len1)
        {
            temp->data=even[index];
            index++;
            temp=temp->next;
        }
        index=0;
        while(temp!=NULL)
        {
            temp->data=odd[index];
            index++;
            temp=temp->next;
        }
        
        
        
  
        
      
        return head;
        // code here
    }
};
