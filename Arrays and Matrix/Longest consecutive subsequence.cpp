class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
        vector<int >v;
        int count=0;
        sort(arr,arr+N);
        for(int i=0;i<N;i++)
        {
            //
            //else
            if(arr[i+1]-arr[i]==1 )
            {
            if (count==0){
            count =2;
           
            }
            
            else 
            count++;
            }
            
            else
            
            if(arr[i+1]-arr[i]!=1)
            {
                if(arr[i]==arr[i+1])
                count=count;
                else
                {
                v.push_back(count);
                //cout<<"HEY!";
                count=0;
                }
                //cout<<count;
            }
           
        }
        
        sort(v.begin(),v.end());
        
      //Your code here
      
      int max=v[v.size()-1];
      if(max==0)
      max=1;
      return max;
    }
};
