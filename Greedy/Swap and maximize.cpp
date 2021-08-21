
long long int maxSum(int arr[], int n)
{
    sort(arr,arr+n);
    int i=0;
    int j=n-1;
    long long int sum=0;
    int count=1;
    while(i<j)
    {
        
        sum=sum+abs(arr[i]-arr[j]);
        count++;
        if(count%2==0)
        i++;
        else
        j--;
        
        //count++;
        
    }
    sum=sum+abs(arr[j]-arr[0]);
    return sum;
}