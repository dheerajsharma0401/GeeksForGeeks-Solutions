
class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        
        unordered_map<int,int> mp;
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(mp.find(k-arr[i])!=mp.end())
            {
                count+=mp[k-arr[i]];
                
            }
            
            mp[arr[i]]++;
            
            for(auto it:mp)
            {
                cout<<it.first<<" "<<it.second<<endl;
            }
            cout<<"-----------------"<<endl;
        }
        
        // for(auto it:mp)
        // cout<<it.first<<" "<<it.second<<" "<<endl;
        return count;
        
        
    }
};