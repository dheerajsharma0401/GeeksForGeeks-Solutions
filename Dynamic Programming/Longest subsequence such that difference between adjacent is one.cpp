class Solution{
public:
    int longestSubsequence(int N, int arr[])
    {
        // code here
        if(N==1)
        return 1;
        int dp[N];
        memset(dp,1,sizeof(dp));
        int res=0;
        for(int i=1;i<N;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(abs(arr[i]-arr[j])==1)
                dp[i]=max(dp[i],1+dp[j]);
            }
            res=max(res,dp[i]);
        }
        
        return res;
    }
};