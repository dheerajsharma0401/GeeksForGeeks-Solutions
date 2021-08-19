class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int zero=0,one=0,two=0;
       for(int i=0;i<n;i++)
       {
           if(a[i]==0)
           zero++;
           else
           if(a[i]==1)
           one++;
           else
           two++;
       }
       int index=0;
       while(zero--)
       {
           a[index]=0;
           index++;
       }
        while(one--)
       {
           a[index]=1;
           index++;
       }
        while(two--)
       {
           a[index]=2;
           index++;
       }
    }
} ;
