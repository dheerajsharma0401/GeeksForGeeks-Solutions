
class Solution{
    public:
    //Function to count subarrays with sum equal to 0.
    ll findSubarray(vector<ll> arr, int n ) {
        //code here
       unordered_map<int,int> mp;
       mp[0]=1;
       ll sum=0;
       ll temp=0;
       
       for(int i=0;i<n;i++)
       {
           temp=temp+arr[i];
           if(mp.find(temp)!=mp.end())
           {
               sum=sum+mp[temp];
               mp[temp]++;
           }
           else
           {
               mp[temp]=1;
           }
       }
       
       
        return sum;
    }
};
