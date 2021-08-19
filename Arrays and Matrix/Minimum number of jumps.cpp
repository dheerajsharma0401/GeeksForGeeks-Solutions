class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        int jumps=0;
        int currmax=0;
        int currend=0;
        
        for(int i=0;i<n-1;i++)
        {
            currmax=max(currmax,i+arr[i]);
            if(i==currend)
            {
                jumps++;
                currend=currmax;
            }
            
            if(currend>=n-1)
            break;
        }
        
        
        if(currend<n-1)
        return -1;
        return jumps;
    }
};