
class Solution{
public:
    int pageFaults(int N, int C, int pages[]){
        vector<int> mem;


        
        int f=0;
        int index=0;
        for(int i=0;i<N;i++)// 5 
        {
            int flag=0;
            auto it=find(mem.begin(),mem.end(),pages[i]);
            if(it!=mem.end())
            {
          //  cout<<pages[i]<<" ";
              mem.erase(it);
              mem.push_back(pages[i]);
            
             
          
            
            }
            else
            if(index<C){
            mem.push_back(pages[i]);
            index++;
            f++;
            }
            else{
            mem.erase(mem.begin());
            mem.push_back(pages[i]);
              f++;
            }
            
            /*for(int j=0;j<C;j++)
            cout<<mem[j]<<" ";
            cout<<"--->"<<f;
            cout<<endl;
            */
           
        }
        return f;
    }
        
        // code here
    
};