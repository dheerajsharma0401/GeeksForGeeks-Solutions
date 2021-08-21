
class Solution{
    public:
    long long int maximizeSum(long long int a[], int n, int k)
    {
        // Your code goes here
        
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            if(a[i]>=0)
            break;
            else
            {
            if(k>0){
            a[i]=a[i]*(-1);
            k--;
            }
            }
        }
        long long min1=INT_MAX;
   long long sum=0;
        for(int i=0;i<n;i++){
        sum=sum+a[i];
        min1=min(min1,a[i]);
        }
        
        
        
        if(k%2==0)
        return sum;
        else
        return sum-2*min1;
    }
};


