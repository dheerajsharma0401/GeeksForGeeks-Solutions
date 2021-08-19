class Solution {
private:
public:
	int minSwaps(vector<int>&nums){
	    
    vector<pair<int,int>> v(nums.size());
    for(int i=0;i<nums.size();i++)
    {
        v[i].first=nums[i];
        v[i].second=i;
    }
    sort(v.begin(),v.end());
    int count=0;

    vector<bool> vis(nums.size(),false);

    for(int i=0;i<nums.size();i++)
    {
    
        if(vis[i] ||v[i].second==i)
            continue;
    
        int cycle=0;
        int j=i;
        while(!vis[j])
        {
            vis[j]=true;
            j=v[j].second;
            cycle++;
        }
        if(cycle>1)
        count=count+cycle-1;
}

	return count;
    
}

};



