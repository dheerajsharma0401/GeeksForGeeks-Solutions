class Solution
{
  public:
  long long int dp[1001][1001];
  
    long long int helper(int i,int j,int arr[]){
        if(i<0 || j<0)
            return 0;

        if(dp[i][j]!=-1)
            return dp[i][j];

        if(j==0)
            return 1;

        if(arr[i]<=j)
            return dp[i][j] = helper(i,j-arr[i],arr)+helper(i-1,j,arr);

        return dp[i][j] = helper(i-1,j,arr);

}
    long long int count( int arr[], int m, int n )
    {
        memset(dp,-1,sizeof(dp));
        return helper(m-1,n,arr);

    }
       
 
};