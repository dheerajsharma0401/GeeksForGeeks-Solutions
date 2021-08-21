
class Solution
{
    public:
   int mem[1001][1001];
    int helper(int x,int y,string &s1,string &s2)
    {
        if(x==0 || y==0)
        return 0;
        if(mem[x][y]!=-1)
        return mem[x][y];
        
        if(s1[x-1]==s2[y-1])
        return mem[x][y]=1+helper(x-1,y-1,s1,s2);
        else
        {
            int op1=helper(x-1,y,s1,s2);
            int op2=helper(x,y-1,s1,s2);
        
        return mem[x][y]=max(op1,op2);
        }
    }
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int x, int y, string s1, string s2)
    {
        // your code here
      memset(mem,-1,sizeof(mem));
        
        return helper(x,y,s1,s2);
        
    }
};

