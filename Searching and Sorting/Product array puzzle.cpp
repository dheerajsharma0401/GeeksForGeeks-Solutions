class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
        vector<long long int> v;
        for(int i=0;i<n;i++)
        {long long prod=1;
            for(int j=0;j<n;j++)
            {
                if(i==j) continue;
                prod=prod*nums[j];
            }
            v.push_back(prod);
        }
       return v;
        //code here        
    }
};


