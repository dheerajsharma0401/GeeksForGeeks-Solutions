
class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int arr[])
    {
       // your code here
       vector<int> dp;
       dp.push_back(arr[0]);
       
       for(int i=1;i<n;i++)
       {
           if(arr[i]>dp.back())
           dp.push_back(arr[i]);
           else
           {
               int ind=lower_bound(dp.begin(),dp.end(),arr[i])-dp.begin();
               dp[ind]=arr[i];
           }
       }
       return dp.size();
    }
};