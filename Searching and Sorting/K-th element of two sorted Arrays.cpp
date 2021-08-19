class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int i=n-1;
        int j=0;
        
        while(i>=0 && j<m)
        {
            if(arr1[i]>arr2[j])
            swap(arr1[i],arr2[j]);
            i--;
            j++;
        }
        sort(arr1,arr1+n);
        sort(arr2,arr2+m);
        /*for(int i=0;i<n;i++)
        cout<<arr1[i]<<" ";
        cout<<endl;
        for(int i=0;i<m;i++)
        cout<<arr2[i]<<" ";
        cout<<endl;
       
        cout<<arr1[k]<<" "<<arr2[k-1-(n)];*/
        if(k-1<n)
        return arr1[k-1];
        else
        return arr2[(k-1)-(n)];
        
    }
};



