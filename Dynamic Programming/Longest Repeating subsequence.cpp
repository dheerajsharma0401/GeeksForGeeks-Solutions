class Solution {
	public:
		int LongestRepeatingSubsequence(string str){
		    // Code here
		    string str1=str;
		    //reverse(str1.begin(),str1.end());
		    
		    int len1=str.length();
		    int dp[len1+1][len1+1];
		    for(int i=0;i<=len1;i++)
		    dp[i][0]=0;
		    
		    for(int j=0;j<=len1;j++)
		    dp[0][j]=0;
		    
		    
		    for(int i=1;i<=len1;i++)
		    {
		        for(int j=1;j<=len1;j++)
		        {
		            if((str[i-1]==str[j-1]) && (i!=j))
		            dp[i][j]=1+dp[i-1][j-1];
		            else
		            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		        }
		    }
		    
		    return dp[len1][len1];
		}

};