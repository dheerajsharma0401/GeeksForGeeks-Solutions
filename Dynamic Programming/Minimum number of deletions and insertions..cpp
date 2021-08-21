
class Solution{
		

	public:
	int minOperations(string str1, string str2) 
	{ 
	    // Your code goes here
	    
	    int len1=str1.length();
	    int len2=str2.length();
	    
	    int dp[len1+1][len2+1];
	    
	    for(int i=0;i<=len1;i++)
	    dp[i][0]=0;
	    for(int i=0;i<=len2;i++)
	    dp[0][i]=0;
	    
	    for(int i=1;i<=len1;i++)
	    {
	        for(int j=1;j<=len2;j++)
	        {
	            if(str1[i-1]==str2[j-1])
	            dp[i][j]=1+dp[i-1][j-1];
	            else
	            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
	        }
	    }
	    
	    int ans=dp[len1][len2];
	    int insert=len2-ans;
	    int del=len1-ans;
	    return insert+del;
	} 
};