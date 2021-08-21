
class Solution{
public:
    int equalPartition(int N, int arr[])
    {
        
        int sum=0;
        for(int i=0;i<N;i++)
        sum+=arr[i];
        
        if(sum%2==1)
        return 0;
        
        int newsum=sum/2;
        
        bool dp[N+1][newsum+1];
        
        for(int i=0;i<=N;i++)
        {
            dp[i][0]=true;
        }
        
        for(int i=1;i<=newsum;i++)
        {
            dp[0][i]=false;
        }
        
        for(int i=1;i<=N;i++)
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
        
        return (dp[N][newsum]);
        
    }
};
