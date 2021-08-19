 // } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            set<int> s1;
            set<int>s2;
            vector<int>v;
            for(int i=0;i<n2;i++)
            s1.insert(B[i]);
            
            for(int i=0;i<n3;i++)
            {
                s2.insert(C[i]);
            }
            
            for(int i=0;i<n1;i++)
            {
                if(s1.find(A[i])!=s1.end() && s2.find(A[i])!=s2.end())
                {
                   auto it = std::find (v.begin(), v.end(), A[i]);
                    if(it==v.end())
                    v.push_back(A[i]);
                }
            }
            return v;
        }

};
