
class Solution{
public:
    int dp[1001][801];
    int mod=1e9+7;
    int helper(int n,int r)
    {
        if(n<r)
        return 0;
       
       // return n;
        if(n==r || r==0)
        return dp[n][r]=1;
        
        if(dp[n][r]!=-1)
        return dp[n][r]%mod;
        
        return dp[n][r]=helper(n-1,r-1)%mod+helper(n-1,r)%mod;
        
        
    }
    int nCr(int n, int r){
        // code here
        if(n<r)
        return 0;
        memset(dp,-1,sizeof(dp));
        return helper(n,r)%mod;
        
        
        
    }
};
