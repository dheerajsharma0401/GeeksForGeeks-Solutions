class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int *v=new int(2);
        sort(arr,arr+n);
        
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
        }
        int sum1=0;
        for(int i=0;i<=n;i++)
        {
            sum1+=i;
        }
        //cout<<sum<<" "<<sum1;
        //cout<<endl;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]-arr[i+1]==0)
            {
               v[0]=arr[i];
               break;
              
            }
            
        }
        
        // for(int i=0;i<n;i++)
        // {
        //     cout<<arr[i]<<" ";
        // }
        v[1]=sum1-sum+v[0];
        return v;
    }
};