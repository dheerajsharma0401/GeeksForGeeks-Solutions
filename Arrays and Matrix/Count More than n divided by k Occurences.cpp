class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        
        unordered_map<int,int> mp;
        
        for(int i=0;i<n;i++)
        mp[arr[i]]++;
        
        
        int freq=n/k;
        
        int count=0;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second>freq)
            count++;
            
        }
        
        return count;
        // Your code here
    }
};
