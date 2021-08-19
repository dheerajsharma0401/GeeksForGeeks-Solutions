class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin(),a.end());
    long long diff=INT_MAX;;
    long long start=0;
    long long end=start+m-1;
   /* for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;*///
    while(end<n)
    {
        int sum=a[end]-a[start];
        if(sum<diff){
        diff=sum;
        //cout<<a[start]<<" "<<a[end]<<endl;
        }
        start++;
        end++;
        }
    
    return diff;
    }   
};

