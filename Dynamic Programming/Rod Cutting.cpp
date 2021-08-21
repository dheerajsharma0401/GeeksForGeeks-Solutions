
class Solution{
  public:
    int cutRod(int price[], int n) {
        
        int len[n];
        for(int i=1;i<=n;i++)
        {
            len[i-1]=i;
        }
        
        int dp[n+1][n+1];
        
        for(int i=0;i<=n;i++)
        {
            dp[i][0]=0;
        
        }
        
        for(int i=1;i<=n;i++)
        {
            dp[0][i]=0;
        }
        
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(len[i-1]<=j)
                {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-len[i-1]]+price[i-1]);
                }
                else
                dp[i][j]=dp[i-1][j];
            }
        }
        
        return dp[n][n];
        
        
    }
};