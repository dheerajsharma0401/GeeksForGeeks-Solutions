class Solution{   
public:
    string smallestNumber(int S, int D){
        // code here 
        
        int num=pow(10,D-1);
        int limit=pow(10,D);
       // cout<<num;
        for(int i=num;i<limit;i++)
        {
            int sum=0;
            int this1=i;
            while(this1>0)
            {
                sum=sum+this1%10;
                this1=this1/10;
            }
            if(sum==S)
            return to_string(i);
        }
        return "-1";
    }
};
