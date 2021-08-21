
class Solution{
    public:
    int countMin(string str){
        
        string str2=str;
        int len1=str.length();
        int len2=str.length();
        reverse(str2.begin(),str2.end());
        
        int mem[len1+1][len2+1];
        
        for(int i=0;i<=len1;i++)
        {
            mem[i][0]=0;
            mem[0][i]=0;
        }
        
        for(int i=1;i<=len1;i++)
        {
            for(int j=1;j<=len2;j++)
            {
                if(str[i-1]==str2[j-1])
                mem[i][j]=mem[i-1][j-1]+1;
                else
                mem[i][j]=max(mem[i-1][j],mem[i][j-1]);
            }
        }
        
       return len1-mem[len1][len1];
    //complete the function here
    }
};
