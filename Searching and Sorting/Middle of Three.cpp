class Solution{
  public:
    int middle(int A, int B, int C){
        //code here//Position this line where user code will be pasted.
        if(A>B && A<C ||A>C && A<B)
        return A;
        else
        if(B>A &&B<C ||B>C && B<A)
        return B;
        else
        return C;
    }
};
