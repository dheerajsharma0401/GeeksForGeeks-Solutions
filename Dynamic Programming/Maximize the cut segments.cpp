
class Solution
{
    public:
    int mem[10001];
    int helper(int n,int x,int y,int z)
    {
        if(n==0)
        {
            return 0;
            
        }
        if(n<0)
        return INT_MIN;
        
        if(mem[n]!=-1)
        return mem[n];
        
        return mem[n]=max(1+helper(n-x,x,y,z),max(1+helper(n-y,x,y,z),1+helper(n-z,x,y,z)));
    }
    //Function to find the maximum number of cuts.
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        memset(mem,-1,sizeof(mem));
        int o= helper(n,x,y,z);
        if(o<0)
        return 0;
        else
        return o;
        
        
        //Your code here
    }
};