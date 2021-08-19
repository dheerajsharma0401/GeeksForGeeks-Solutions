class Solution {
  public:
    int countSquares(int N) {
        int count=0;
        for(int i=1;i<N;i++)
        {
            if(i*i<N)
            count++;
            else
            if(i*i>=N)
            break;
            
        }
        return count;
        // code here
    }
};