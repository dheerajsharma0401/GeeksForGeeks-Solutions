
class Solution{
  public:
    int minimumNumberOfDeletions(string S) { 
        // code here
        int n=S.length();
        
        int dp[n+1][n+1];
        for(int i=0;i<=n;i++)
        {
            dp[i][0]=0;
            dp[0][i]=0;
        }
        
        string s2=S;
        reverse(s2.begin(),s2.end());
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(S[i-1]==s2[j-1])
                dp[i][j]=1+dp[i-1][j-1];
                else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        
        return n-dp[n][n];
        
    } 
};