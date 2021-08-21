
class Solution
{
    public:
    //Function to find the nth catalan number.
    cpp_int findCatalan(int n) 
    {
        //code here]
        cpp_int mem[n+1];//memset(mem,0,sizeof(mem));
        mem[0]=1;
        mem[1]=1;
        
           for (int i = 2; i <= n; i++) {
        mem[i] = 0;
        for (int j = 0; j < i; j++)
            mem[i] += mem[j] * mem[i - j - 1];
    }
    return mem[n];
    }
};

