
class Solution{
public:
    string chooseandswap(string a){
        string b="";
       set<char > v;
        for(int i=0;i<a.length();i++)
       v.insert(a[i]);
        
        //sort(v.begin(),v.end());
        char rep1,rep2;
        int flag=0;
        for(int i=0;i<a.size();i++)
        {
            v.erase(a[i]);
            if(v.empty()) break;
            if(*v.begin()<a[i])
            {
                 rep1=a[i];
                 rep2=*v.begin();
                 flag=1;
            }
            if(flag==1)
            break;
        }
        if(flag==0)
        return a;
      
        for(int i=0;i<a.length();i++)
        {
            if(a[i]==rep1)
            b=b+rep2;
            else
            if(a[i]==rep2)
            b=b+rep1;
            else
            b=b+a[i];
        }
        
       
        return b;
        
        
        
        
        
        // Code Here
    }
    
};
