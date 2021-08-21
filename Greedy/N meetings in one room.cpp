
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    static bool comp(pair<int,int> lhs, pair<int,int> rhs)
    {
        return lhs.second<rhs.second;
    }
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int,int>> v;
        
        for(int i=0;i<n;i++)
        {
            v.push_back({start[i],end[i]});
        }
        
        
        sort(v.begin(),v.end(),comp);
        
        int count=1;
        int endd=v[0].second;
        for(int i=1;i<n;i++)
        {
            if(v[i].first>endd)
            {
                count++;
                endd=v[i].second;
            }
        }
        
        return count;
    }
};
