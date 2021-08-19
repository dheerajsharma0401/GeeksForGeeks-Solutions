class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(int *arr, int n) {
	    long long max=INT_MIN;
	    
	        for(long long  i=0;i<n;i++)
	        {
	             long long prod=1;
	              for(long long  j=i;j<n;j++)
	              {
	            
	            prod=prod*arr[j];
	             if(prod==0)
	            prod=1;
	              
	            if(prod>max)
	            max=prod;
	              }
	           
	        }
	        
	        return max;
	    
	    
	    // code here
	}
};
