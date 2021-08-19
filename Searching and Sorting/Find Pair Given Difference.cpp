#include<algorithm>
#include<set>
using namespace std;

int main() {
	//code
	int test;
	cin>>test;
	while(test--)
	{
	    int l,n;
	    cin>>l>>n;
	    int a[l];
	    set<int> s;
	    for(int i=0;i<l;i++)
	    {
	    cin>>a[i];
	    s.insert(a[i]);
	    }
	    int found=0;
	   
        for(int i=0;i<l && found==0;i++)
        {
            int b=n+a[i];
            if(s.find(b)!=s.end())
            {
                found=1;
            cout<<1<<endl;
            
        }
        }
        if(found==0)
        cout<<-1<<endl;

	    
	}
	return 0;
}

