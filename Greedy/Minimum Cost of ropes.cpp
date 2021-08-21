
class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        
        
       // sort(arr,arr+n);
        
        priority_queue <long long , vector<long long >, greater<long long>> v;
        
      for(long long  i=0;i<n;i++)
      {
          v.push(arr[i]);
      }
            
           
        
        long long sum=0;
        
        while(v.size()>1)
        {
            long long a=v.top();
            v.pop();
           long long b=v.top();
            v.pop();
            long long sum1=a+b;
            sum=sum+sum1;
           // cout<<sum1<<" ";
            v.push(sum1);
        }
        
        
            
            
        
        return sum;
        // Your code here
    }
};
