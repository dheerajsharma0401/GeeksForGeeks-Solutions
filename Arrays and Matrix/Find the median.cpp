class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		    sort(v.begin(),v.end());
		    int median;
		    int n=v.size();
		    if(n%2==0)
		    {
		        median=(v[(n/2)-1]+v[n/2])/2;
		    }
		    else
		    median=v[n/2];
		    // Code here.
		    return median;
		}
};