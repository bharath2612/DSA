#include<iostream>
#include<math.h>
using namespace std;
void prime(int n)
{
    int i;
    if (n<=1) return;
    
    while(n%2==0)
        cout<<"nada";   //not working
        n=n/2;
        cout<<n<<endl;

    while(n%3==0)
        cout<<"3";
        n=n/3;
        cout<<n<<endl;
    
    for (i = 5;i*i<=n;i=i+6)
    {
        while(n%i==0)
        {
            cout<<i<<endl;
            n=n/i;
        }   
        while(n%(i+2)==0)
        {
            cout<<(i+2)<<endl;
            n=n/(i+2);
        }  
    } 

    if (n>3)
        cout<<n;
}
int main()
{
    int n;
    cin>>n;
    prime(n);
}