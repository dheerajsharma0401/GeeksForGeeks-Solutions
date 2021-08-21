class Solution{

  public:
	int minDifference(int arr[], int n)  { 
	    
	    if(n==1)
	    return arr[0];
	    int sum=0;
	    for(int i=0;i<n;i++)
	    sum+=arr[i];
	    
	    int newsum=sum/2;
	    
	    bool dp[n+1][newsum+1];
	    for(int i=0;i<n+1;i++)
	    dp[i][0]=true;
	    
	    for(int i=1;i<=newsum;i++)
	    dp[0][i]=false;
	    
	    for(int i=1;i<=n;i++)
	    {
	        for(int j=1;j<=newsum;j++)
	        {
	            if(arr[i-1]<=j)
	            {
	                dp[i][j]=dp[i-1][j]||dp[i-1][j-arr[i-1]];
	            }
	            else
	            dp[i][j]=dp[i-1][j];
	            
	        }
	        
	    }
	    
	    int maxx=-1;
	    for(int i=1;i<=newsum;i++)
	    {
	        if(dp[n][i])
	        maxx=max(maxx,i);
	    }
	    
	    return sum-2*maxx;
	    
	    
	    // Your code goes here
	} 
};