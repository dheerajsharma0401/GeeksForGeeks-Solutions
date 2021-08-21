
class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int x, int y, string s1, string s2)
    {
        // your code here
        
        int n1=s1.length();
        int  n2=s2.length();
        
        if(n1==0 || n2==0)
        return 0;
        int  dp[n1+1][n2+1];
      //  memset(dp,0,sizeof(dp));
        for(int i=0;i<=n1;i++)
        dp[i][0]=0;
        
        for(int j=0;j<=n2;j++)
        dp[0][j]=0;
        
        for(int i=1;i<=n1;i++)
        {
            for(int j=1;j<=n2;j++)
            {
                if(s1[i-1]==s2[j-1])
                dp[i][j]=1+dp[i-1][j-1];
                else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        
        
        int i=n1;
        int j=n2;
        string res="";
        while(j>0 && i>0)
        {
            if(s1[i-1]==s2[j-1])
            {
                res+=s1[i-1];
                i--;
                j--;
            }
            else
            if(dp[i-1][j]>=dp[i][j-1])
            {
                i--;
            }
            else
            j--;
        }
        reverse(res.begin(),res.end());
        cout<<res<<endl;
        return dp[n1][n2];
    }
};