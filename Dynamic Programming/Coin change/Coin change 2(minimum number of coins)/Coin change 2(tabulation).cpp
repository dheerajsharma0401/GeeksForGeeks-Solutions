class Solution{

	public:
	int minCoins(int coins[], int M, int V) 
	{ 
	    
	    int INF=INT_MAX-1;
	    
	    int dp[M+1][V+1];
	    
	    for(int i=0;i<=V;i++)
	    {
	        dp[0][i]=INF;
	    }
	    
	    for(int i=1;i<=M;i++)
	    {
	        dp[i][0]=0;
	    }
	   
	   
	    for(int j=1;j<=V;j++)
	    {
	        if(j%coins[0]==0)
	        dp[1][j]=j/coins[0];
	        else
	        dp[1][j]=INF;
	    }
	    
	    for(int i=1;i<=M;i++)
	    {
	        for(int j=1;j<=V;j++)
	        {
	            if(coins[i-1]<=j)
	            {
	                dp[i][j]=min(dp[i-1][j],1+dp[i][j-coins[i-1]]);
	            }
	            else
	            dp[i][j]=dp[i-1][j];
	        }
	    }
	    
	    
	    if(dp[M][V]==INF)
	    return -1;
	    
	    return dp[M][V];
	    
	    
	} 
	  
};