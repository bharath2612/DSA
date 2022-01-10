#include<iostream>
#include<math.h>
using namespace std;
void getTotalBits(int n)
{
    int res=0;
    int i,s=n,c=n;
    for(i=1;i<=s;i++){
    while(n>0){
        n=(n&(n-1));
        res++;
        cout<<n<<endl;
    }
    c--;   
    n=c; 
    }    
    cout<<res;
}
int main()
{
    int n=17;
    getTotalBits(n);
    return 0;
}