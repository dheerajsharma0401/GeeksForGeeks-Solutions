
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int mem[1002][1002];
    int helper(int w,int wt[],int val[],int n)
    {
    
        if(n==0||w==0)
            return 0;
        if(mem[n-1][w]!=-1)
            return mem[n-1][w];
        if(wt[n-1]<=w)
        {
            mem[n-1][w]= max(val[n-1]+helper(w-wt[n-1],wt,val,n-1),helper(w,wt,val,n-1));
            return mem[n-1][w];
        }
        else
        {
            if(mem[n-1][w]!=-1)
                return mem[n-1][w];
            else
            {
                mem[n-1][w]= helper(w,wt,val,n-1);
                return mem[n-1][w];
            }
        }
        
       // Your code here
    }
    int knapSack(int W, int wt[], int val[], int n) 
    {
        memset(mem,-1,sizeof(mem));
        return helper(W,wt,val,n);
       // Your code here
    }
};

