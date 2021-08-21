
class Solution{
public:
    int dp[501][501];
    int isPalindrome(string s,int i,int j)
    {
        while(i<=j)
        {
            if(s[i]!=s[j])
            return false;
            
            i++;j--;
            
        }
        return true;
    }
    int solve(int i,int j,string s)
    {
        if(i>=j)
        return 0;
        if(isPalindrome(s,i,j))
        return 0;
        int mini=INT_MAX;
        
        for(int k=i;k<=j-1;k++)
        {
            int x,y;
            if(dp[i][k]!=-1)
            x=dp[i][k];
            else
            x=solve(i,k,s);
            
            if(dp[k+1][j]!=-1)
            y=dp[k+1][j];
            else
            y=solve(k+1,j,s);
            
            int tempmin=x+y+1;
            
            mini=min(mini,tempmin);
            
        }
        
        return dp[i][j]=mini;
        
    }
    int palindromicPartition(string str)
    {
        // code here
        int n=str.length();
        memset(dp,-1,sizeof(dp));
        return solve(0,n-1,str);
    }
};