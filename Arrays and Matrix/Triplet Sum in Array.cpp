class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        int k=0;
        int count=0;
        sort(A,A+n);
        for(int i=0;i<n;i++)
        {
            int element=A[i];
            int start=i+1;
            int end=n-1;
            while(start<end)
            {
          
                int sum=element+A[start]+A[end];
                if(sum>X)
                end--;
                else
                if(sum<X)
                start++;
                else
                if(sum==X)
                return true;
            }
            
           
            
        }
        return false;
    }

};
