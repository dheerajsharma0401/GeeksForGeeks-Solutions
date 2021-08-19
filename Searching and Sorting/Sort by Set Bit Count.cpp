//Solved using comparator

class Solution{
 
public:

    static bool cmp (int a , int b){

    long int cnt1 =0;
    long int cnt2=0;
    while(a){
        a= a & a-1;
        cnt1++;
        }
    while(b){
        b= b & b-1;
        cnt2++;
    }

    if(cnt1<= cnt2) return 0;
        return 1;

}
void sortBySetBitCount(int arr[], int n)
{

stable_sort(arr,arr+n,cmp);
}
};



