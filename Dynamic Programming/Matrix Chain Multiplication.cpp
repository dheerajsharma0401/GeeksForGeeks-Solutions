
class Solution{
public:
    int dp[101][101];
    int solve(int i,int j,int arr[])
    {
        if(i>=j)
        return 0;
        if(dp[i][j]!=-1)
        return dp[i][j];
        
        int mini=INT_MAX;
        for(int k=i;k<=j-1;k++)
        {
            int x;int y;
            if(dp[i][k]!=-1)
            x=dp[i][k];
            else
            x=solve(i,k,arr);
            
            if(dp[k+1][j]!=-1)
            {
                y=dp[k+1][j];
            }
            else
            y=solve(k+1,j,arr);
            int tempmin=x+y+arr[i-1]*arr[k]*arr[j];
            
            mini=min(mini,tempmin);
        }
        return dp[i][j]=mini;
        
    }
    int matrixMultiplication(int N, int arr[])
    {
        memset(dp,-1,sizeof(dp));
        return solve(1,N-1,arr);
        
        
    }
};