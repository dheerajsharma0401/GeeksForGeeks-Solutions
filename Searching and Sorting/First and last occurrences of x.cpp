vector<int> find(int arr[], int n , int x )
{
    // code here
    vector<int> v(2);
    v[0]=-1;
    v[1]=-1;
    int minn=INT_MAX;
    if(n==1)
    {
        if(arr[0]==x)
        {
            v[0]=0;
            v[1]=0;
            return v;
        }
        else
        {
           return v;
        }
    }
    
    int low=0;
    int high=n-1;
    //first
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        //cout<<arr[mid]<<" ";
        if(arr[mid]==x)
        {
           // cout<<"Hey";
        minn=min(mid,minn);
        high=mid-1;
        }
        else
        if(arr[mid]>x)
        {
            high=mid-1;
        }
        else
        low=mid+1;
        
    }
    
    //cout<<minn<<endl;
    
    low=0;
    high=n-1;
    int maxx=-1;
      while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]==x){
        maxx=max(mid,maxx);
        low=mid+1;
        }
        else
        if(arr[mid]>x)
        {
            high=mid-1;
        }
        else
        low=mid+1;
        
    }
    if(minn==INT_MAX)
    minn=-1;
    v[0]=minn;
    v[1]=maxx;
    
    return v;
    
}