class Solution {
  public:
 
 int dp[101][101];
 int  solve(int i,int j,string s,string t)
 
 {
     if(dp[i][j]!=-1)
     return dp[i][j];
     if(i==s.size())
     return t.size()-j;
     if(j==t.size())
     return s.size()-i;
     
     if(s[i]==t[j])
     return dp[i][j]=solve(i+1,j+1,s,t);
     else
     {
         int left=1+solve(i+1,j,s,t);
         int right=1+solve(i,j+1,s,t);
         int mid=1+solve(i+1,j+1,s,t);
         
         return dp[i][j]=min(left,min(right,mid));
     }
     
     
     
 }
    
    
    int editDistance(string s, string t) {
        // Code here
        
        int len1=s.length();
        int len2=t.length();
        memset(dp,-1,sizeof(dp));
        
        return solve(0 ,0 ,s,t);
        
        
        
        
    }
    
};