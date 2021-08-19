class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    
	    int ind=0;
	    int maxx=INT_MIN;
	    for(int i=0;i<n;i++)
	    {
	       int count=0;
	        for(int j=0;j<m;j++)
	        {
	            if(arr[i][j]==1)
	            count++;
	        }
	        if(count>maxx){
	          //  cout<<count<<" ";
	            
	        maxx=count;
	        ind=i;
	        }
	        
	        
	        
	    }
	    
	    if(maxx==0)
	    return -1;
	    return ind;
	}

};