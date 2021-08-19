long long  multiplyTwoLists (Node* l1, Node* l2)
{
    long long mod=1000000007;
  //Your code here
 long long num1=0,num2=0;
 while(l1||l2)
 {
     if(l1){
     num1=((num1*10)%mod+(l1->data)%mod)%mod;
     l1=l1->next;
     }
     
     if(l2){
     num2=((num2*10)%mod+(l2->data)%mod)%mod;
     l2=l2->next;
     }
     
     
     
 }
  
  
  return ((num1%mod)*(num2%mod))%mod;
  
}