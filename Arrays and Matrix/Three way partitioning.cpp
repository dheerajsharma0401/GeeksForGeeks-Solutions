class Solution{   
public:
    //Function to partition the array around the range such 
    //that array is divided into three parts.
    void threeWayPartition(vector<int>& array,int a, int b)
    {
        // code here 
        vector<int> v;
        for(int i=0;i<array.size();i++)
        {
            if( array[i]<a )
            v.push_back(array[i]);
            
        }
         for(int i=0;i<array.size();i++)
        {
            if(array[i]>=a && array[i]<=b )
            v.push_back(array[i]);
            
            
        }
         for(int i=0;i<array.size();i++)
        {
            if(array[i]>b)
            v.push_back(array[i]);
            
        }
        
        for(int i=0;i<v.size();i++)
        {
            
        array[i]=v[i];
        }
    }
};

