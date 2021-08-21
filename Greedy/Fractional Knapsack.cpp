
bool cmp(Item a1,Item a2)
{
    double r1=(double)a1.value/(double)a1.weight;
    double r2=(double)a2.value/(double)a2.weight;
    
    return r1>r2;
}

class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        sort(arr,arr+n,cmp);
        
        double currw=0;
        double currval=0;
        
        for(int i=0;i<n;i++)
        {
            if(currw+arr[i].weight<=W)
            {
                currw+=arr[i].weight;
                currval+=arr[i].value;
            
            }
            else
            {
                double rem=W-currw;
                currval+=(arr[i].value)*rem/(double)(arr[i].weight);
                break;
            }
        }
        return currval;
    }
        
};