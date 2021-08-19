class Solution{
	
	
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{
	    // Your code goes here
	   
	    long long count=0;
	    sort(arr,arr+n);
	    for(int i=0;i<n-2;i++)
	    {
	        int start=i+1;
	        int end=n-1;
	        while(start<end)
	        {
	            int num=arr[i]+arr[start]+arr[end];
	            //cout<<num<<endl;
	            if(num>=sum)
	            end--;
	            else
	            {
	                count+=end-start;
	                start++;
	            }
	        }
	    }
	    return count;
	}
		 

};
