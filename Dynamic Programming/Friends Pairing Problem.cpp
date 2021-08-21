class Solution
{
    public:
    int mod=1e9+7;
  
   long long  int solve(int n,long long int dp[])
    {
        
        if(dp[n]!=-1)
        return dp[n]%mod;
        if(n==0 || n==1 || n==2)
        return n;
        
        return dp[n]=((solve(n-1,dp)%mod)+((n-1)%mod)*(solve(n-2,dp)%mod))%mod;
        
        
        
    }
    int countFriendsPairings(int n) 
    { 
        long long   int dp[n+1];
        memset(dp,-1,sizeof(dp));
        return solve(n,dp)%mod;
        // code here
       
    }
};  