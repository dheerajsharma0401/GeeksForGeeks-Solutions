class Solution

{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        // Write Your Code here
        //vector<int> vec;
       // vector<int> formin;
        
        
        sort(candies,candies+N);
        
        
      
      
        int start=0,end=N-1;
        int mincount=0,maxcount=0;
        while(start<=end){
            mincount=mincount+candies[start];
            start++;
            end=end-K;
            
            
        }
        start=0;
        end=N-1;
          while(start<=end){
            maxcount=maxcount+candies[end];
            start=start+K;
            end--;
            
            
        }
        
        vector<int> v;
        v.push_back(mincount);
        v.push_back(maxcount);
        return v;
        
        
    }
};

