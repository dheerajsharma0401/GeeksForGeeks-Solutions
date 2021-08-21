
class Solution{
		

	public:
	int mem[1001][1001];
	int helper(int cost[],int n,int w)
	{
	    if(n<=0|| w<0)
	    return -1;
	    if(w==0)
	    return 0;
	    if(mem[n][w])
	    return mem[n][w];
	    if(cost[n-1]==-1||n>w)
	    return mem[n][w]=helper(cost,n-1,w);
	    else
	    {
	        int inc=helper(cost,n,w-n);
	        int exc=helper(cost,n-1,w);
	        if(inc==-1 && exc==-1)
	        mem[n][w]=-1;
	        else
	         if(inc==-1 || exc==-1)
	        {
	            if(inc==-1)
	            mem[n][w]=exc;
	            else
	            mem[n][w]=cost[n-1]+inc;
	        }
	        else
	        {
	            mem[n][w]=min(inc+cost[n-1],exc);
	        }
	    }
	    return mem[n][w];
	}


int minimumCost(int cost[], int n, int w)
{
    memset(mem,0,sizeof(mem));
    return helper(cost,n,w);
}