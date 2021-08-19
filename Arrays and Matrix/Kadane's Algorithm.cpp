class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n){
        int sum=0;
        int maxx=INT_MIN;
        
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            if(sum>maxx)
            maxx=sum;
            
            if(sum<0)
            sum=0;
        }
        return maxx;
        
    }
};