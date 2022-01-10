#include<iostream>
#include<math.h>
using namespace std;
void getFirstSetBit(int n)
{
    int i,res = 1;
    while(n>0){
        if((n&1)==1){
           cout<<res; 
           break;
        }
        n=n>>1;
        res++;
    }
}
int main()
{
    int n=4;
    getFirstSetBit(n);
    return 0;
}