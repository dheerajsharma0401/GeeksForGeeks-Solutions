//Function to find majority element in the array
// a: input array
// size: size of input array

//Solved using Moore's Voting Algorithm
int majorityElement(int a[], int size)
{
        
    // your code here
    int count=0;
    int maj=-1;
    for(int i=0;i<size;i++)
    {
        if(count==0)
        {
            
            maj=a[i];
            
        }
        if(maj==a[i])
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    
    int f=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]==maj)
        f++;
    }
    if(f>(size/2))
    return maj;
    return -1;
        
}
