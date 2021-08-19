class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        // code here
        vector<int>v;
        sort(matrix.begin(),matrix.end());
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            v.push_back(matrix[i][j]);
        }
        int answer,index=0;
       sort(v.begin(),v.end());
            index=v.size()/2;
            answer=v[index];
        
       
        return answer;
    }
};
