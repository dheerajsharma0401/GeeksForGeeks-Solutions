
class Solution{
  public:
  void divide(Node* head,Node**a,Node**b)
  {
      Node* slow=head;
      Node*fast=head->next;
      
      while(fast!=NULL)
      {
          fast=fast->next;
          if(fast!=NULL)
          {
              fast=fast->next;
              slow=slow->next;
          }
      }
      
      *a=head;
      *b=slow->next;
      slow->next=NULL;
  }
  
  Node* sortMerge(Node* a,Node* b)
  {
      if(a==NULL)
      return b;
      if(b==NULL)
      return a;
      Node* result=NULL;
      
      if(a->data<b->data)
      {
          result=a;
          result->next=sortMerge(a->next,b);
          
      }
      else
      {
          result=b;
          result->next=sortMerge(a,b->next);
      }
      
      return result;
  }
  
    //Function to sort the given linked list using Merge Sort.
    Node* mergeSort(Node* head) {
        if(head==NULL ||head->next==NULL)
        {
            return head;
        }
        Node* a,*b;
        divide(head,&a,&b);
        a=mergeSort(a);
        b=mergeSort(b);
        head=sortMerge(a,b);
        return head;
        // your code here
    }
};


