class Solution{
    public:
    int Maximize(int a[],int n)
    {
        // Complete the function
        sort(a,a+n);
        
        long long  max1=0;
        for(int i=0;i<n;i++)
        max1=(max1+((long long )a[i]*(i))%(1000000000+7))%(1000000000+7);
        return (int)max1;
    }
};

