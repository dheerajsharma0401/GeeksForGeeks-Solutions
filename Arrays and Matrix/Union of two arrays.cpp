class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        int count=0;
     unordered_set<int>s;
     for(int i=0;i<n;i++)
     s.insert(a[i]);
     for(int i=0;i<m;i++)
     s.insert(b[i]);
     
     
     count=s.size();
          return count;
    }
};
