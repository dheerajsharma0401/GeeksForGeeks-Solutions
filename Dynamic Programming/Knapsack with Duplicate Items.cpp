
class Solution{
public:
    int knapSack(int N, int W, int val[], int wt[])
    {
        // code here
        int mem[N+1][W+1];
        
        for(int i=0;i<=N;i++)
        mem[i][0]=0;
        for(int j=1;j<=W;j++)
        mem[0][j]=0;
        
        for(int i=1;i<=N;i++)
        {
            for(int j=1;j<=W;j++)
            {
                if(wt[i-1]<=j)
                {
                    mem[i][j]=max(mem[i-1][j],val[i-1]+mem[i][j-wt[i-1]]);
                }
                else
                mem[i][j]=mem[i-1][j];
            }
        }
        
        return mem[N][W];
    }
};