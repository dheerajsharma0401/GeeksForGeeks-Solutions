
bool comparator(Job arr1,Job arr2)
{
    if(arr1.profit>arr2.profit)
    return true;
    else
    return false;
}
class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        sort(arr,arr+n,comparator);
        int count=0,pro=0;
       int store[100]={0};
       for(int i=0;i<n;i++)
       {
           int prof=arr[i].profit;
           int time1=arr[i].dead-1;
           while(store[time1]!=0 && time1>=0 )
           {
               time1--;
           }
           if(time1<0)
           continue;
           else
           if(store[time1]==0){
           store[time1]=prof;
           pro=pro+prof;
           count++;
           }
           
       }
       vector<int> v;
       v.push_back(count);
       v.push_back(pro);
       
       return v;
       
       
        // your code here
    } 
};
