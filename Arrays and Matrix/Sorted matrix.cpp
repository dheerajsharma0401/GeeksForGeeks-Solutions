class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        // code here
        vector<int>v;
        
        for(int i=0;i<Mat.size();i++)
        {
            for(int j=0;j<Mat[i].size();j++)
            {
                v.push_back(Mat[i][j]);
            }
        }
        
        sort(v.begin(),v.end());
        int index=0;
        
        for(int i=0;i<Mat.size();i++)
        {
            for(int j=0;j<Mat[i].size();j++)
            {
                Mat[i][j]=v[index];
                index++;
            }
        }
        return Mat;
        
        
    }
};