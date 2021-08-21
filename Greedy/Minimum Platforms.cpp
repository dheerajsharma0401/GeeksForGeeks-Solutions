class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    
    
   
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
      sort(arr,arr+n);
    sort(dep,dep+n);
    int count=0;
    int j=0;
    for(int i=0;i<n;i++)
    {
     if(arr[i]<=dep[j])
     count++;
     else
     j++;
    }
    
    	   /*for(int i=0;i<mindep.size();i++)
    	    cout<<mindep[i]<<" ";*/
    	return count;
    }
};


